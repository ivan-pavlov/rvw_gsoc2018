// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// create_cache
void create_cache(std::string dir, std::string data_file, std::string cache_file);
RcppExport SEXP _rvwgsoc_create_cache(SEXP dirSEXP, SEXP data_fileSEXP, SEXP cache_fileSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type dir(dirSEXP);
    Rcpp::traits::input_parameter< std::string >::type data_file(data_fileSEXP);
    Rcpp::traits::input_parameter< std::string >::type cache_file(cache_fileSEXP);
    create_cache(dir, data_file, cache_file);
    return R_NilValue;
END_RCPP
}
// vwtrain
void vwtrain(Rcpp::List& vwmodel, SEXP data, Rcpp::Nullable<Rcpp::String> readable_model, bool quiet, bool update_model, int passes, bool cache, Rcpp::Nullable<SEXP *> namespaces, Rcpp::Nullable<Rcpp::CharacterVector> keep_space, Rcpp::Nullable<Rcpp::CharacterVector> targets, Rcpp::Nullable<Rcpp::CharacterVector> probabilities, Rcpp::Nullable<Rcpp::String> weight, Rcpp::Nullable<Rcpp::String> base, Rcpp::Nullable<Rcpp::String> tag, Rcpp::Nullable<int> multiline);
RcppExport SEXP _rvwgsoc_vwtrain(SEXP vwmodelSEXP, SEXP dataSEXP, SEXP readable_modelSEXP, SEXP quietSEXP, SEXP update_modelSEXP, SEXP passesSEXP, SEXP cacheSEXP, SEXP namespacesSEXP, SEXP keep_spaceSEXP, SEXP targetsSEXP, SEXP probabilitiesSEXP, SEXP weightSEXP, SEXP baseSEXP, SEXP tagSEXP, SEXP multilineSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List& >::type vwmodel(vwmodelSEXP);
    Rcpp::traits::input_parameter< SEXP >::type data(dataSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::String> >::type readable_model(readable_modelSEXP);
    Rcpp::traits::input_parameter< bool >::type quiet(quietSEXP);
    Rcpp::traits::input_parameter< bool >::type update_model(update_modelSEXP);
    Rcpp::traits::input_parameter< int >::type passes(passesSEXP);
    Rcpp::traits::input_parameter< bool >::type cache(cacheSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<SEXP *> >::type namespaces(namespacesSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::CharacterVector> >::type keep_space(keep_spaceSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::CharacterVector> >::type targets(targetsSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::CharacterVector> >::type probabilities(probabilitiesSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::String> >::type weight(weightSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::String> >::type base(baseSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::String> >::type tag(tagSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<int> >::type multiline(multilineSEXP);
    vwtrain(vwmodel, data, readable_model, quiet, update_model, passes, cache, namespaces, keep_space, targets, probabilities, weight, base, tag, multiline);
    return R_NilValue;
END_RCPP
}
// vwtest
Rcpp::NumericVector vwtest(Rcpp::List& vwmodel, SEXP data, std::string probs_path, Rcpp::Nullable<Rcpp::String> readable_model, bool quiet, int passes, bool cache, Rcpp::Nullable<SEXP *> namespaces, Rcpp::Nullable<Rcpp::CharacterVector> keep_space, Rcpp::Nullable<Rcpp::CharacterVector> targets, Rcpp::Nullable<Rcpp::CharacterVector> probabilities, Rcpp::Nullable<Rcpp::String> weight, Rcpp::Nullable<Rcpp::String> base, Rcpp::Nullable<Rcpp::String> tag, Rcpp::Nullable<int> multiline);
RcppExport SEXP _rvwgsoc_vwtest(SEXP vwmodelSEXP, SEXP dataSEXP, SEXP probs_pathSEXP, SEXP readable_modelSEXP, SEXP quietSEXP, SEXP passesSEXP, SEXP cacheSEXP, SEXP namespacesSEXP, SEXP keep_spaceSEXP, SEXP targetsSEXP, SEXP probabilitiesSEXP, SEXP weightSEXP, SEXP baseSEXP, SEXP tagSEXP, SEXP multilineSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List& >::type vwmodel(vwmodelSEXP);
    Rcpp::traits::input_parameter< SEXP >::type data(dataSEXP);
    Rcpp::traits::input_parameter< std::string >::type probs_path(probs_pathSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::String> >::type readable_model(readable_modelSEXP);
    Rcpp::traits::input_parameter< bool >::type quiet(quietSEXP);
    Rcpp::traits::input_parameter< int >::type passes(passesSEXP);
    Rcpp::traits::input_parameter< bool >::type cache(cacheSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<SEXP *> >::type namespaces(namespacesSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::CharacterVector> >::type keep_space(keep_spaceSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::CharacterVector> >::type targets(targetsSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::CharacterVector> >::type probabilities(probabilitiesSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::String> >::type weight(weightSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::String> >::type base(baseSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::String> >::type tag(tagSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<int> >::type multiline(multilineSEXP);
    rcpp_result_gen = Rcpp::wrap(vwtest(vwmodel, data, probs_path, readable_model, quiet, passes, cache, namespaces, keep_space, targets, probabilities, weight, base, tag, multiline));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_rvwgsoc_create_cache", (DL_FUNC) &_rvwgsoc_create_cache, 3},
    {"_rvwgsoc_vwtrain", (DL_FUNC) &_rvwgsoc_vwtrain, 15},
    {"_rvwgsoc_vwtest", (DL_FUNC) &_rvwgsoc_vwtest, 15},
    {NULL, NULL, 0}
};

RcppExport void R_init_rvwgsoc(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
