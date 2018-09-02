// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// MeanShift_Classical
DataFrame MeanShift_Classical(NumericMatrix pc, double H2CW_fac, double H2CL_fac, bool UniformKernel, int MaxIter);
RcppExport SEXP _MeanShiftR_MeanShift_Classical(SEXP pcSEXP, SEXP H2CW_facSEXP, SEXP H2CL_facSEXP, SEXP UniformKernelSEXP, SEXP MaxIterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type pc(pcSEXP);
    Rcpp::traits::input_parameter< double >::type H2CW_fac(H2CW_facSEXP);
    Rcpp::traits::input_parameter< double >::type H2CL_fac(H2CL_facSEXP);
    Rcpp::traits::input_parameter< bool >::type UniformKernel(UniformKernelSEXP);
    Rcpp::traits::input_parameter< int >::type MaxIter(MaxIterSEXP);
    rcpp_result_gen = Rcpp::wrap(MeanShift_Classical(pc, H2CW_fac, H2CL_fac, UniformKernel, MaxIter));
    return rcpp_result_gen;
END_RCPP
}
// MeanShift_Voxels
DataFrame MeanShift_Voxels(NumericMatrix pc, double H2CW_fac, double H2CL_fac, bool UniformKernel, int MaxIter, int maxx, int maxy, int maxz);
RcppExport SEXP _MeanShiftR_MeanShift_Voxels(SEXP pcSEXP, SEXP H2CW_facSEXP, SEXP H2CL_facSEXP, SEXP UniformKernelSEXP, SEXP MaxIterSEXP, SEXP maxxSEXP, SEXP maxySEXP, SEXP maxzSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type pc(pcSEXP);
    Rcpp::traits::input_parameter< double >::type H2CW_fac(H2CW_facSEXP);
    Rcpp::traits::input_parameter< double >::type H2CL_fac(H2CL_facSEXP);
    Rcpp::traits::input_parameter< bool >::type UniformKernel(UniformKernelSEXP);
    Rcpp::traits::input_parameter< int >::type MaxIter(MaxIterSEXP);
    Rcpp::traits::input_parameter< int >::type maxx(maxxSEXP);
    Rcpp::traits::input_parameter< int >::type maxy(maxySEXP);
    Rcpp::traits::input_parameter< int >::type maxz(maxzSEXP);
    rcpp_result_gen = Rcpp::wrap(MeanShift_Voxels(pc, H2CW_fac, H2CL_fac, UniformKernel, MaxIter, maxx, maxy, maxz));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_hello
List rcpp_hello();
RcppExport SEXP _MeanShiftR_rcpp_hello() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(rcpp_hello());
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_MeanShiftR_MeanShift_Classical", (DL_FUNC) &_MeanShiftR_MeanShift_Classical, 5},
    {"_MeanShiftR_MeanShift_Voxels", (DL_FUNC) &_MeanShiftR_MeanShift_Voxels, 8},
    {"_MeanShiftR_rcpp_hello", (DL_FUNC) &_MeanShiftR_rcpp_hello, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_MeanShiftR(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}