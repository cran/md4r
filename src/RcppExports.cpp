// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// encodeURI
Rcpp::CharacterVector encodeURI(Rcpp::CharacterVector value);
RcppExport SEXP _md4r_encodeURI(SEXP valueSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type value(valueSEXP);
    rcpp_result_gen = Rcpp::wrap(encodeURI(value));
    return rcpp_result_gen;
END_RCPP
}
// encodeURIComponent
Rcpp::CharacterVector encodeURIComponent(Rcpp::CharacterVector value);
RcppExport SEXP _md4r_encodeURIComponent(SEXP valueSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type value(valueSEXP);
    rcpp_result_gen = Rcpp::wrap(encodeURIComponent(value));
    return rcpp_result_gen;
END_RCPP
}
// decodeURI
Rcpp::CharacterVector decodeURI(Rcpp::CharacterVector value);
RcppExport SEXP _md4r_decodeURI(SEXP valueSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type value(valueSEXP);
    rcpp_result_gen = Rcpp::wrap(decodeURI(value));
    return rcpp_result_gen;
END_RCPP
}
// decodeURIComponent
Rcpp::CharacterVector decodeURIComponent(Rcpp::CharacterVector value);
RcppExport SEXP _md4r_decodeURIComponent(SEXP valueSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type value(valueSEXP);
    rcpp_result_gen = Rcpp::wrap(decodeURIComponent(value));
    return rcpp_result_gen;
END_RCPP
}
// parse_md_cpp
Rcpp::List parse_md_cpp(std::string x, int flag);
RcppExport SEXP _md4r_parse_md_cpp(SEXP xSEXP, SEXP flagSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type flag(flagSEXP);
    rcpp_result_gen = Rcpp::wrap(parse_md_cpp(x, flag));
    return rcpp_result_gen;
END_RCPP
}
// flag_mask
int flag_mask(std::vector<std::string> const& flags);
RcppExport SEXP _md4r_flag_mask(SEXP flagsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<std::string> const& >::type flags(flagsSEXP);
    rcpp_result_gen = Rcpp::wrap(flag_mask(flags));
    return rcpp_result_gen;
END_RCPP
}
// flag_is_set
bool flag_is_set(std::vector<std::string> const& flags, std::vector<std::string> const& check);
RcppExport SEXP _md4r_flag_is_set(SEXP flagsSEXP, SEXP checkSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<std::string> const& >::type flags(flagsSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> const& >::type check(checkSEXP);
    rcpp_result_gen = Rcpp::wrap(flag_is_set(flags, check));
    return rcpp_result_gen;
END_RCPP
}
// table_entry_escape
std::string table_entry_escape(std::string const& x);
RcppExport SEXP _md4r_table_entry_escape(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string const& >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(table_entry_escape(x));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_md4r_encodeURI", (DL_FUNC) &_md4r_encodeURI, 1},
    {"_md4r_encodeURIComponent", (DL_FUNC) &_md4r_encodeURIComponent, 1},
    {"_md4r_decodeURI", (DL_FUNC) &_md4r_decodeURI, 1},
    {"_md4r_decodeURIComponent", (DL_FUNC) &_md4r_decodeURIComponent, 1},
    {"_md4r_parse_md_cpp", (DL_FUNC) &_md4r_parse_md_cpp, 2},
    {"_md4r_flag_mask", (DL_FUNC) &_md4r_flag_mask, 1},
    {"_md4r_flag_is_set", (DL_FUNC) &_md4r_flag_is_set, 2},
    {"_md4r_table_entry_escape", (DL_FUNC) &_md4r_table_entry_escape, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_md4r(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
