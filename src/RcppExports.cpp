// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "coco_types.h"
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// cov_rns
NumericMatrix cov_rns(List& theta, NumericMatrix& locs, NumericMatrix& x_covariates, NumericVector& smooth_limits);
RcppExport SEXP _coco_cov_rns(SEXP thetaSEXP, SEXP locsSEXP, SEXP x_covariatesSEXP, SEXP smooth_limitsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List& >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< NumericMatrix& >::type locs(locsSEXP);
    Rcpp::traits::input_parameter< NumericMatrix& >::type x_covariates(x_covariatesSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type smooth_limits(smooth_limitsSEXP);
    rcpp_result_gen = Rcpp::wrap(cov_rns(theta, locs, x_covariates, smooth_limits));
    return rcpp_result_gen;
END_RCPP
}
// cov_rns_pred
NumericMatrix cov_rns_pred(List& theta, NumericMatrix& locs, NumericMatrix& locs_pred, NumericMatrix& x_covariates, NumericMatrix& x_covariates_pred, NumericVector& smooth_limits);
RcppExport SEXP _coco_cov_rns_pred(SEXP thetaSEXP, SEXP locsSEXP, SEXP locs_predSEXP, SEXP x_covariatesSEXP, SEXP x_covariates_predSEXP, SEXP smooth_limitsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List& >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< NumericMatrix& >::type locs(locsSEXP);
    Rcpp::traits::input_parameter< NumericMatrix& >::type locs_pred(locs_predSEXP);
    Rcpp::traits::input_parameter< NumericMatrix& >::type x_covariates(x_covariatesSEXP);
    Rcpp::traits::input_parameter< NumericMatrix& >::type x_covariates_pred(x_covariates_predSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type smooth_limits(smooth_limitsSEXP);
    rcpp_result_gen = Rcpp::wrap(cov_rns_pred(theta, locs, locs_pred, x_covariates, x_covariates_pred, smooth_limits));
    return rcpp_result_gen;
END_RCPP
}
// cov_rns_classic
NumericMatrix cov_rns_classic(List& theta, NumericMatrix& locs, NumericMatrix& x_covariates);
RcppExport SEXP _coco_cov_rns_classic(SEXP thetaSEXP, SEXP locsSEXP, SEXP x_covariatesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List& >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< NumericMatrix& >::type locs(locsSEXP);
    Rcpp::traits::input_parameter< NumericMatrix& >::type x_covariates(x_covariatesSEXP);
    rcpp_result_gen = Rcpp::wrap(cov_rns_classic(theta, locs, x_covariates));
    return rcpp_result_gen;
END_RCPP
}
// cov_rns_classic_prod_smooth
NumericMatrix cov_rns_classic_prod_smooth(List& theta, NumericMatrix& locs, NumericMatrix& x_covariates);
RcppExport SEXP _coco_cov_rns_classic_prod_smooth(SEXP thetaSEXP, SEXP locsSEXP, SEXP x_covariatesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List& >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< NumericMatrix& >::type locs(locsSEXP);
    Rcpp::traits::input_parameter< NumericMatrix& >::type x_covariates(x_covariatesSEXP);
    rcpp_result_gen = Rcpp::wrap(cov_rns_classic_prod_smooth(theta, locs, x_covariates));
    return rcpp_result_gen;
END_RCPP
}
// cov_rns_taper_optimized_predict_range
NumericVector cov_rns_taper_optimized_predict_range(List& theta, NumericMatrix& locs, NumericMatrix& locs_pred, NumericMatrix& x_covariates, NumericMatrix& x_covariates_pred, NumericVector& colindices, NumericVector& rowpointers, NumericVector& smooth_limits);
RcppExport SEXP _coco_cov_rns_taper_optimized_predict_range(SEXP thetaSEXP, SEXP locsSEXP, SEXP locs_predSEXP, SEXP x_covariatesSEXP, SEXP x_covariates_predSEXP, SEXP colindicesSEXP, SEXP rowpointersSEXP, SEXP smooth_limitsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List& >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< NumericMatrix& >::type locs(locsSEXP);
    Rcpp::traits::input_parameter< NumericMatrix& >::type locs_pred(locs_predSEXP);
    Rcpp::traits::input_parameter< NumericMatrix& >::type x_covariates(x_covariatesSEXP);
    Rcpp::traits::input_parameter< NumericMatrix& >::type x_covariates_pred(x_covariates_predSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type colindices(colindicesSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type rowpointers(rowpointersSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type smooth_limits(smooth_limitsSEXP);
    rcpp_result_gen = Rcpp::wrap(cov_rns_taper_optimized_predict_range(theta, locs, locs_pred, x_covariates, x_covariates_pred, colindices, rowpointers, smooth_limits));
    return rcpp_result_gen;
END_RCPP
}
// cov_rns_taper_optimized_range
NumericVector cov_rns_taper_optimized_range(List& theta, NumericMatrix& locs, NumericMatrix& x_covariates, NumericVector& colindices, NumericVector& rowpointers, NumericVector& smooth_limits);
RcppExport SEXP _coco_cov_rns_taper_optimized_range(SEXP thetaSEXP, SEXP locsSEXP, SEXP x_covariatesSEXP, SEXP colindicesSEXP, SEXP rowpointersSEXP, SEXP smooth_limitsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List& >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< NumericMatrix& >::type locs(locsSEXP);
    Rcpp::traits::input_parameter< NumericMatrix& >::type x_covariates(x_covariatesSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type colindices(colindicesSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type rowpointers(rowpointersSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type smooth_limits(smooth_limitsSEXP);
    rcpp_result_gen = Rcpp::wrap(cov_rns_taper_optimized_range(theta, locs, x_covariates, colindices, rowpointers, smooth_limits));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_coco_cov_rns", (DL_FUNC) &_coco_cov_rns, 4},
    {"_coco_cov_rns_pred", (DL_FUNC) &_coco_cov_rns_pred, 6},
    {"_coco_cov_rns_classic", (DL_FUNC) &_coco_cov_rns_classic, 3},
    {"_coco_cov_rns_classic_prod_smooth", (DL_FUNC) &_coco_cov_rns_classic_prod_smooth, 3},
    {"_coco_cov_rns_taper_optimized_predict_range", (DL_FUNC) &_coco_cov_rns_taper_optimized_predict_range, 8},
    {"_coco_cov_rns_taper_optimized_range", (DL_FUNC) &_coco_cov_rns_taper_optimized_range, 6},
    {NULL, NULL, 0}
};

RcppExport void R_init_coco(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}