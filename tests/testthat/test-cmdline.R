context("Check predictions against command line version of VW")
library(rvwgsoc)

test_that("empty vwsetup works as CL version", {
  # Package session
  test_vwmodel <- vwsetup(
    dir = "./",
    train_data = "X_train.vw",
    test_data = "X_valid.vw",
    model = "pk_mdl.vw"
  )
  vwtrain(test_vwmodel)
  vw_pk_output <- vwtest(test_vwmodel)
  vw_pk_mdl_checksum <- unname(tools::md5sum("pk_mdl.vw"))
  file.remove("pk_mdl.vw")
  
  # Command Line session
  system(
    "vw -d ./X_train.vw -f ./cl_mdl.vw",
    intern = FALSE,
    ignore.stderr = TRUE
  )
  vw_cl_output <- as.numeric(
    system(
      "vw -t -d ./X_valid.vw -i ./cl_mdl.vw -p /dev/stdout",
      intern = TRUE,
      ignore.stderr = TRUE
    )
  )
  vw_cl_mdl_checksum <- unname(tools::md5sum("cl_mdl.vw"))
  file.remove("cl_mdl.vw")
  
  # Results comparison
  expect_equal(vw_pk_mdl_checksum, vw_cl_mdl_checksum, tolerance=1e-7)
  expect_equal(vw_pk_output, vw_cl_output, tolerance=1e-7)
})

test_that("nn vwsetup works as CL version", {
  # Package session
  test_vwmodel <- vwsetup(
    dir = "./",
    train_data = "X_train.vw",
    test_data = "X_valid.vw",
    model = "pk_mdl.vw",
    learning_mode = "nn",
    learning_params = list(hidden = 4)
  )
  vwtrain(test_vwmodel)
  vw_pk_output <- vwtest(test_vwmodel)
  vw_pk_mdl_checksum <- unname(tools::md5sum("pk_mdl.vw"))
  file.remove("pk_mdl.vw")
  
  # Command Line session
  system(
    "vw --nn 4 -d ./X_train.vw -f ./cl_mdl.vw",
    intern = FALSE,
    ignore.stderr = TRUE
  )
  vw_cl_output <- as.numeric(
    system(
      "vw --nn 4 -t -d ./X_valid.vw -i ./cl_mdl.vw -p /dev/stdout",
      intern = TRUE,
      ignore.stderr = TRUE
    )
  )
  vw_cl_mdl_checksum <- unname(tools::md5sum("cl_mdl.vw"))
  file.remove("cl_mdl.vw")
  
  # Results comparison
  expect_equal(vw_pk_mdl_checksum, vw_cl_mdl_checksum)
  expect_equal(vw_pk_output, vw_cl_output, tolerance=1e-7)
})


test_that("vwsetup with custom arguments and cache works as CL version", {
  # Package session
  test_vwmodel <- vwsetup(
    dir = "./",
    train_data = "X_train.vw",
    test_data = "X_valid.vw",
    model = "pk_mdl.vw",
    cache = TRUE,
    general_params = list(passes=10),
    optimization_params = list(adaptive=FALSE),
    learning_params = list(binary=TRUE)
  )
  vwtrain(test_vwmodel)
  vw_pk_output <- vwtest(test_vwmodel)
  vw_pk_mdl_checksum <- unname(tools::md5sum("pk_mdl.vw"))
  file.remove("pk_mdl.vw","X_train.vw.cache", "X_valid.vw.cache")
  
  # Command Line session
  system(
    paste0("vw --passes 10 --cache --bit_precision 18 --holdout_period 10",
           " --early_terminate 3 --initial_weight 0 --binary --normalized",
           " --invariant --l1 0 --l2 0 --decay_learning_rate 1 --initial_t 0",
           " --power_t 0.5 --learning_rate 0.5 --loss_function squared",
           " --quantile_tau 0.5",
           " -d ./X_train.vw -f ./cl_mdl.vw"),
    intern = FALSE,
    ignore.stderr = TRUE
  )
  vw_cl_output <- as.numeric(
    system(
      paste0("vw --passes 10 --cache --bit_precision 18 --holdout_period 10",
             " --early_terminate 3 --initial_weight 0 --binary --normalized",
             " --invariant --l1 0 --l2 0 --decay_learning_rate 1 --initial_t 0",
             " --power_t 0.5 --learning_rate 0.5 --loss_function squared",
             " --quantile_tau 0.5",
             " -t -d ./X_valid.vw -i ./cl_mdl.vw -p /dev/stdout"),
      intern = TRUE,
      ignore.stderr = TRUE
    )
  )
  vw_cl_mdl_checksum <- unname(tools::md5sum("cl_mdl.vw"))
  file.remove("cl_mdl.vw", "X_train.vw.cache", "X_valid.vw.cache")
  
  # Results comparison
  expect_equal(vw_pk_mdl_checksum, vw_cl_mdl_checksum)
  expect_equal(vw_pk_output, vw_cl_output, tolerance=1e-7)
})