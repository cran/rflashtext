// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// loadTrie
SEXP loadTrie(const std::string& trieStr);
RcppExport SEXP _rflashtext_loadTrie(SEXP trieStrSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::string& >::type trieStr(trieStrSEXP);
    rcpp_result_gen = Rcpp::wrap(loadTrie(trieStr));
    return rcpp_result_gen;
END_RCPP
}
// buildTrie
SEXP buildTrie(const Rcpp::StringVector& keys, const Rcpp::StringVector& values, const std::string& id);
RcppExport SEXP _rflashtext_buildTrie(SEXP keysSEXP, SEXP valuesSEXP, SEXP idSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::StringVector& >::type keys(keysSEXP);
    Rcpp::traits::input_parameter< const Rcpp::StringVector& >::type values(valuesSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type id(idSEXP);
    rcpp_result_gen = Rcpp::wrap(buildTrie(keys, values, id));
    return rcpp_result_gen;
END_RCPP
}
// addKeysWords
int addKeysWords(SEXP ptr, const Rcpp::StringVector& keys, const Rcpp::StringVector& values, const std::string& id);
RcppExport SEXP _rflashtext_addKeysWords(SEXP ptrSEXP, SEXP keysSEXP, SEXP valuesSEXP, SEXP idSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type ptr(ptrSEXP);
    Rcpp::traits::input_parameter< const Rcpp::StringVector& >::type keys(keysSEXP);
    Rcpp::traits::input_parameter< const Rcpp::StringVector& >::type values(valuesSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type id(idSEXP);
    rcpp_result_gen = Rcpp::wrap(addKeysWords(ptr, keys, values, id));
    return rcpp_result_gen;
END_RCPP
}
// dumpTrie
std::string dumpTrie(SEXP ptr);
RcppExport SEXP _rflashtext_dumpTrie(SEXP ptrSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type ptr(ptrSEXP);
    rcpp_result_gen = Rcpp::wrap(dumpTrie(ptr));
    return rcpp_result_gen;
END_RCPP
}
// containKeys
Rcpp::LogicalVector containKeys(SEXP ptr, const Rcpp::StringVector& keys, const std::string& id);
RcppExport SEXP _rflashtext_containKeys(SEXP ptrSEXP, SEXP keysSEXP, SEXP idSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type ptr(ptrSEXP);
    Rcpp::traits::input_parameter< const Rcpp::StringVector& >::type keys(keysSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type id(idSEXP);
    rcpp_result_gen = Rcpp::wrap(containKeys(ptr, keys, id));
    return rcpp_result_gen;
END_RCPP
}
// getWords
Rcpp::StringVector getWords(SEXP ptr, const Rcpp::StringVector& keys, const std::string& id);
RcppExport SEXP _rflashtext_getWords(SEXP ptrSEXP, SEXP keysSEXP, SEXP idSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type ptr(ptrSEXP);
    Rcpp::traits::input_parameter< const Rcpp::StringVector& >::type keys(keysSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type id(idSEXP);
    rcpp_result_gen = Rcpp::wrap(getWords(ptr, keys, id));
    return rcpp_result_gen;
END_RCPP
}
// findKeys
Rcpp::List findKeys(SEXP ptr, const Rcpp::StringVector& sentences, const std::string& word_chars, const std::string& id, bool span_info);
RcppExport SEXP _rflashtext_findKeys(SEXP ptrSEXP, SEXP sentencesSEXP, SEXP word_charsSEXP, SEXP idSEXP, SEXP span_infoSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type ptr(ptrSEXP);
    Rcpp::traits::input_parameter< const Rcpp::StringVector& >::type sentences(sentencesSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type word_chars(word_charsSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type id(idSEXP);
    Rcpp::traits::input_parameter< bool >::type span_info(span_infoSEXP);
    rcpp_result_gen = Rcpp::wrap(findKeys(ptr, sentences, word_chars, id, span_info));
    return rcpp_result_gen;
END_RCPP
}
// replaceKeys
Rcpp::StringVector replaceKeys(SEXP ptr, const Rcpp::StringVector& sentences, const std::string& word_chars, const std::string& id);
RcppExport SEXP _rflashtext_replaceKeys(SEXP ptrSEXP, SEXP sentencesSEXP, SEXP word_charsSEXP, SEXP idSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type ptr(ptrSEXP);
    Rcpp::traits::input_parameter< const Rcpp::StringVector& >::type sentences(sentencesSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type word_chars(word_charsSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type id(idSEXP);
    rcpp_result_gen = Rcpp::wrap(replaceKeys(ptr, sentences, word_chars, id));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_rflashtext_loadTrie", (DL_FUNC) &_rflashtext_loadTrie, 1},
    {"_rflashtext_buildTrie", (DL_FUNC) &_rflashtext_buildTrie, 3},
    {"_rflashtext_addKeysWords", (DL_FUNC) &_rflashtext_addKeysWords, 4},
    {"_rflashtext_dumpTrie", (DL_FUNC) &_rflashtext_dumpTrie, 1},
    {"_rflashtext_containKeys", (DL_FUNC) &_rflashtext_containKeys, 3},
    {"_rflashtext_getWords", (DL_FUNC) &_rflashtext_getWords, 3},
    {"_rflashtext_findKeys", (DL_FUNC) &_rflashtext_findKeys, 5},
    {"_rflashtext_replaceKeys", (DL_FUNC) &_rflashtext_replaceKeys, 4},
    {NULL, NULL, 0}
};

RcppExport void R_init_rflashtext(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}