// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "../inst/include/xml2_types.h"
#include <Rcpp.h>

using namespace Rcpp;

// read_connection_
RawVector read_connection_(RObject con, int chunk_size);
RcppExport SEXP _xml2_read_connection_(SEXP conSEXP, SEXP chunk_sizeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< RObject >::type con(conSEXP);
    Rcpp::traits::input_parameter< int >::type chunk_size(chunk_sizeSEXP);
    rcpp_result_gen = Rcpp::wrap(read_connection_(con, chunk_size));
    return rcpp_result_gen;
END_RCPP
}
// xml_parse_options
Rcpp::IntegerVector xml_parse_options();
RcppExport SEXP _xml2_xml_parse_options() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(xml_parse_options());
    return rcpp_result_gen;
END_RCPP
}
// unique_ns
CharacterVector unique_ns(CharacterVector ns);
RcppExport SEXP _xml2_unique_ns(SEXP nsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type ns(nsSEXP);
    rcpp_result_gen = Rcpp::wrap(unique_ns(ns));
    return rcpp_result_gen;
END_RCPP
}
// xml_save_options
Rcpp::IntegerVector xml_save_options();
RcppExport SEXP _xml2_xml_save_options() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(xml_save_options());
    return rcpp_result_gen;
END_RCPP
}
// url_absolute
CharacterVector url_absolute(CharacterVector x, CharacterVector base);
RcppExport SEXP _xml2_url_absolute(SEXP xSEXP, SEXP baseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type base(baseSEXP);
    rcpp_result_gen = Rcpp::wrap(url_absolute(x, base));
    return rcpp_result_gen;
END_RCPP
}
// url_relative
CharacterVector url_relative(CharacterVector x, CharacterVector base);
RcppExport SEXP _xml2_url_relative(SEXP xSEXP, SEXP baseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type base(baseSEXP);
    rcpp_result_gen = Rcpp::wrap(url_relative(x, base));
    return rcpp_result_gen;
END_RCPP
}
// url_parse
List url_parse(CharacterVector x);
RcppExport SEXP _xml2_url_parse(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(url_parse(x));
    return rcpp_result_gen;
END_RCPP
}
// url_escape
CharacterVector url_escape(CharacterVector x, CharacterVector reserved);
RcppExport SEXP _xml2_url_escape(SEXP xSEXP, SEXP reservedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type reserved(reservedSEXP);
    rcpp_result_gen = Rcpp::wrap(url_escape(x, reserved));
    return rcpp_result_gen;
END_RCPP
}
// url_unescape
CharacterVector url_unescape(CharacterVector x);
RcppExport SEXP _xml2_url_unescape(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(url_unescape(x));
    return rcpp_result_gen;
END_RCPP
}
// xpath_search
RObject xpath_search(XPtrNode node, XPtrDoc doc, std::string xpath, CharacterVector nsMap, double num_results);
RcppExport SEXP _xml2_xpath_search(SEXP nodeSEXP, SEXP docSEXP, SEXP xpathSEXP, SEXP nsMapSEXP, SEXP num_resultsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtrNode >::type node(nodeSEXP);
    Rcpp::traits::input_parameter< XPtrDoc >::type doc(docSEXP);
    Rcpp::traits::input_parameter< std::string >::type xpath(xpathSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type nsMap(nsMapSEXP);
    Rcpp::traits::input_parameter< double >::type num_results(num_resultsSEXP);
    rcpp_result_gen = Rcpp::wrap(xpath_search(node, doc, xpath, nsMap, num_results));
    return rcpp_result_gen;
END_RCPP
}
