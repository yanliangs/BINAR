// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// generalized_median
int generalized_median(NumericVector pred);
RcppExport SEXP _BINAR_generalized_median(SEXP predSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type pred(predSEXP);
    rcpp_result_gen = Rcpp::wrap(generalized_median(pred));
    return rcpp_result_gen;
END_RCPP
}
// posterior_inar
List posterior_inar(IntegerVector y, int p, List prior, int burn_in, int N, unsigned int random_seed, bool verbose);
RcppExport SEXP _BINAR_posterior_inar(SEXP ySEXP, SEXP pSEXP, SEXP priorSEXP, SEXP burn_inSEXP, SEXP NSEXP, SEXP random_seedSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< int >::type p(pSEXP);
    Rcpp::traits::input_parameter< List >::type prior(priorSEXP);
    Rcpp::traits::input_parameter< int >::type burn_in(burn_inSEXP);
    Rcpp::traits::input_parameter< int >::type N(NSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type random_seed(random_seedSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(posterior_inar(y, p, prior, burn_in, N, random_seed, verbose));
    return rcpp_result_gen;
END_RCPP
}
// predictive_distribution_inar
NumericVector predictive_distribution_inar(List model, int h, int replications);
RcppExport SEXP _BINAR_predictive_distribution_inar(SEXP modelSEXP, SEXP hSEXP, SEXP replicationsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type model(modelSEXP);
    Rcpp::traits::input_parameter< int >::type h(hSEXP);
    Rcpp::traits::input_parameter< int >::type replications(replicationsSEXP);
    rcpp_result_gen = Rcpp::wrap(predictive_distribution_inar(model, h, replications));
    return rcpp_result_gen;
END_RCPP
}
// posterior_adinar
List posterior_adinar(IntegerVector y, int p, List prior, int burn_in, int N, unsigned int random_seed, bool verbose);
RcppExport SEXP _BINAR_posterior_adinar(SEXP ySEXP, SEXP pSEXP, SEXP priorSEXP, SEXP burn_inSEXP, SEXP NSEXP, SEXP random_seedSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< int >::type p(pSEXP);
    Rcpp::traits::input_parameter< List >::type prior(priorSEXP);
    Rcpp::traits::input_parameter< int >::type burn_in(burn_inSEXP);
    Rcpp::traits::input_parameter< int >::type N(NSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type random_seed(random_seedSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(posterior_adinar(y, p, prior, burn_in, N, random_seed, verbose));
    return rcpp_result_gen;
END_RCPP
}
// predictive_distribution_adinar
NumericVector predictive_distribution_adinar(List model, int h, int replications);
RcppExport SEXP _BINAR_predictive_distribution_adinar(SEXP modelSEXP, SEXP hSEXP, SEXP replicationsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type model(modelSEXP);
    Rcpp::traits::input_parameter< int >::type h(hSEXP);
    Rcpp::traits::input_parameter< int >::type replications(replicationsSEXP);
    rcpp_result_gen = Rcpp::wrap(predictive_distribution_adinar(model, h, replications));
    return rcpp_result_gen;
END_RCPP
}
// posterior_dpinar
List posterior_dpinar(IntegerVector y, int p, List prior, int burn_in, int N, unsigned int random_seed, bool verbose);
RcppExport SEXP _BINAR_posterior_dpinar(SEXP ySEXP, SEXP pSEXP, SEXP priorSEXP, SEXP burn_inSEXP, SEXP NSEXP, SEXP random_seedSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< int >::type p(pSEXP);
    Rcpp::traits::input_parameter< List >::type prior(priorSEXP);
    Rcpp::traits::input_parameter< int >::type burn_in(burn_inSEXP);
    Rcpp::traits::input_parameter< int >::type N(NSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type random_seed(random_seedSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(posterior_dpinar(y, p, prior, burn_in, N, random_seed, verbose));
    return rcpp_result_gen;
END_RCPP
}
// predictive_distribution_dpinar
NumericVector predictive_distribution_dpinar(List model, int h, int replications);
RcppExport SEXP _BINAR_predictive_distribution_dpinar(SEXP modelSEXP, SEXP hSEXP, SEXP replicationsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type model(modelSEXP);
    Rcpp::traits::input_parameter< int >::type h(hSEXP);
    Rcpp::traits::input_parameter< int >::type replications(replicationsSEXP);
    rcpp_result_gen = Rcpp::wrap(predictive_distribution_dpinar(model, h, replications));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_BINAR_generalized_median", (DL_FUNC) &_BINAR_generalized_median, 1},
    {"_BINAR_posterior_inar", (DL_FUNC) &_BINAR_posterior_inar, 7},
    {"_BINAR_predictive_distribution_inar", (DL_FUNC) &_BINAR_predictive_distribution_inar, 3},
    {"_BINAR_posterior_adinar", (DL_FUNC) &_BINAR_posterior_adinar, 7},
    {"_BINAR_predictive_distribution_adinar", (DL_FUNC) &_BINAR_predictive_distribution_adinar, 3},
    {"_BINAR_posterior_dpinar", (DL_FUNC) &_BINAR_posterior_dpinar, 7},
    {"_BINAR_predictive_distribution_dpinar", (DL_FUNC) &_BINAR_predictive_distribution_dpinar, 3},
    {NULL, NULL, 0}
};

RcppExport void R_init_BINAR(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
