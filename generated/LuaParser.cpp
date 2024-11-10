
// Generated from Lua.g4 by ANTLR 4.13.2


#include "LuaVisitor.h"

#include "LuaParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct LuaParserStaticData final {
  LuaParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  LuaParserStaticData(const LuaParserStaticData&) = delete;
  LuaParserStaticData(LuaParserStaticData&&) = delete;
  LuaParserStaticData& operator=(const LuaParserStaticData&) = delete;
  LuaParserStaticData& operator=(LuaParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag luaParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<LuaParserStaticData> luaParserStaticData = nullptr;

void luaParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (luaParserStaticData != nullptr) {
    return;
  }
#else
  assert(luaParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<LuaParserStaticData>(
    std::vector<std::string>{
      "chunk", "block", "stat", "varDecl", "functioncall", "gotoStat", "doStat", 
      "whileStat", "repeatStat", "ifStat", "forStat", "forInStat", "funcStat", 
      "localFuncStat", "localVarDecl", "retstat", "label", "funcname", "varlist", 
      "namelist", "attnamelist", "nameattrib", "explist", "exp", "longString", 
      "prefixexp", "varOrExp", "var", "varSuffix", "nameAndArgs", "args", 
      "functiondef", "funcbody", "parlist", "tableconstructor", "fieldlist", 
      "field", "fieldsep", "operatorOr", "operatorAnd", "operatorComparison", 
      "operatorStrcat", "operatorAddSub", "operatorMulDivMod", "operatorBitwise", 
      "operatorUnary", "operatorPower", "unaryOperator", "number", "string"
    },
    std::vector<std::string>{
      "", "'or'", "'and'", "'<='", "'>='", "'~='", "'=='", "'..'", "'+'", 
      "'-'", "'*'", "'/'", "'%'", "'//'", "'&'", "'|'", "'~'", "'<<'", "'>>'", 
      "'not'", "'#'", "'^'", "'function'", "'return'", "'local'", "'true'", 
      "'false'", "'nil'", "'break'", "'do'", "'end'", "'goto'", "'while'", 
      "'repeat'", "'until'", "'for'", "'if'", "'then'", "'else'", "'elseif'", 
      "'in'", "';'", "','", "'.'", "'='", "':'", "'::'", "'...'", "'<'", 
      "'>'", "'('", "')'", "'{'", "'}'", "'['", "']'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "FUNCTION", "RETURN", "LOCAL", "TRUE", "FALSE", 
      "NIL", "BREAK", "DO", "END", "GOTO", "WHILE", "REPEAT", "UNTIL", "FOR", 
      "IF", "THEN", "ELSE", "ELSEIF", "IN", "SEMI", "COMMA", "DOT", "EQL", 
      "COLON", "DCOLON", "ELLIPSIS", "LT", "GT", "LP", "RP", "LB", "RB", 
      "LSB", "RSB", "NAME", "NORMALSTRING", "CHARSTRING", "LONGSTRING", 
      "INT", "HEX", "FLOAT", "HEX_FLOAT", "COMMENT", "LINE_COMMENT", "WS", 
      "SHEBANG"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,67,478,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,7,
  	28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,35,7,
  	35,2,36,7,36,2,37,7,37,2,38,7,38,2,39,7,39,2,40,7,40,2,41,7,41,2,42,7,
  	42,2,43,7,43,2,44,7,44,2,45,7,45,2,46,7,46,2,47,7,47,2,48,7,48,2,49,7,
  	49,1,0,3,0,102,8,0,1,0,1,0,1,0,1,1,5,1,108,8,1,10,1,12,1,111,9,1,1,1,
  	3,1,114,8,1,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,
  	2,3,2,131,8,2,1,3,1,3,1,3,1,3,3,3,137,8,3,1,4,1,4,4,4,141,8,4,11,4,12,
  	4,142,1,4,3,4,146,8,4,1,5,1,5,1,5,1,6,1,6,1,6,1,6,1,7,1,7,1,7,1,7,1,7,
  	1,7,1,8,1,8,1,8,1,8,1,8,3,8,166,8,8,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,
  	9,5,9,177,8,9,10,9,12,9,180,9,9,1,9,1,9,3,9,184,8,9,1,9,1,9,1,10,1,10,
  	1,10,1,10,1,10,1,10,1,10,1,10,3,10,196,8,10,1,10,1,10,1,10,1,10,1,11,
  	1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,12,1,12,1,12,1,12,1,13,1,13,1,13,
  	1,13,1,13,1,14,1,14,1,14,1,14,3,14,223,8,14,1,14,3,14,226,8,14,1,15,1,
  	15,3,15,230,8,15,1,15,3,15,233,8,15,1,16,1,16,1,16,1,16,1,17,1,17,1,17,
  	5,17,242,8,17,10,17,12,17,245,9,17,1,17,1,17,3,17,249,8,17,1,18,1,18,
  	1,18,5,18,254,8,18,10,18,12,18,257,9,18,1,19,1,19,1,19,5,19,262,8,19,
  	10,19,12,19,265,9,19,1,20,1,20,1,20,5,20,270,8,20,10,20,12,20,273,9,20,
  	1,21,1,21,1,21,1,21,3,21,279,8,21,1,22,1,22,1,22,5,22,284,8,22,10,22,
  	12,22,287,9,22,1,23,1,23,1,23,1,23,1,23,1,23,1,23,1,23,1,23,1,23,1,23,
  	1,23,1,23,1,23,3,23,303,8,23,1,23,1,23,1,23,1,23,1,23,1,23,1,23,1,23,
  	1,23,1,23,1,23,1,23,1,23,1,23,1,23,1,23,1,23,1,23,1,23,1,23,1,23,1,23,
  	1,23,1,23,1,23,1,23,1,23,1,23,1,23,1,23,1,23,1,23,5,23,337,8,23,10,23,
  	12,23,340,9,23,1,24,1,24,1,24,1,24,1,25,1,25,5,25,348,8,25,10,25,12,25,
  	351,9,25,1,26,1,26,1,26,1,26,1,26,3,26,358,8,26,1,27,1,27,1,27,1,27,1,
  	27,1,27,3,27,366,8,27,1,27,5,27,369,8,27,10,27,12,27,372,9,27,1,28,5,
  	28,375,8,28,10,28,12,28,378,9,28,1,28,1,28,1,28,1,28,1,28,1,28,3,28,386,
  	8,28,1,29,1,29,3,29,390,8,29,1,29,1,29,1,30,1,30,3,30,396,8,30,1,30,1,
  	30,1,30,3,30,401,8,30,1,31,1,31,1,31,1,32,1,32,3,32,408,8,32,1,32,1,32,
  	1,32,1,32,1,33,1,33,1,33,3,33,417,8,33,1,33,3,33,420,8,33,1,34,1,34,3,
  	34,424,8,34,1,34,1,34,1,35,1,35,1,35,1,35,5,35,432,8,35,10,35,12,35,435,
  	9,35,1,35,3,35,438,8,35,1,36,1,36,1,36,1,36,1,36,1,36,1,36,1,36,1,36,
  	1,36,3,36,450,8,36,1,37,1,37,1,38,1,38,1,39,1,39,1,40,1,40,1,41,1,41,
  	1,42,1,42,1,43,1,43,1,44,1,44,1,45,1,45,1,46,1,46,1,47,1,47,1,48,1,48,
  	1,49,1,49,1,49,0,1,46,50,0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,
  	34,36,38,40,42,44,46,48,50,52,54,56,58,60,62,64,66,68,70,72,74,76,78,
  	80,82,84,86,88,90,92,94,96,98,0,8,1,0,41,42,2,0,3,6,48,49,1,0,8,9,1,0,
  	10,13,1,0,14,18,3,0,9,9,16,16,19,20,1,0,60,63,1,0,57,59,498,0,101,1,0,
  	0,0,2,109,1,0,0,0,4,130,1,0,0,0,6,132,1,0,0,0,8,138,1,0,0,0,10,147,1,
  	0,0,0,12,150,1,0,0,0,14,154,1,0,0,0,16,160,1,0,0,0,18,167,1,0,0,0,20,
  	187,1,0,0,0,22,201,1,0,0,0,24,209,1,0,0,0,26,213,1,0,0,0,28,218,1,0,0,
  	0,30,227,1,0,0,0,32,234,1,0,0,0,34,238,1,0,0,0,36,250,1,0,0,0,38,258,
  	1,0,0,0,40,266,1,0,0,0,42,274,1,0,0,0,44,280,1,0,0,0,46,302,1,0,0,0,48,
  	341,1,0,0,0,50,345,1,0,0,0,52,357,1,0,0,0,54,365,1,0,0,0,56,376,1,0,0,
  	0,58,389,1,0,0,0,60,400,1,0,0,0,62,402,1,0,0,0,64,405,1,0,0,0,66,419,
  	1,0,0,0,68,421,1,0,0,0,70,427,1,0,0,0,72,449,1,0,0,0,74,451,1,0,0,0,76,
  	453,1,0,0,0,78,455,1,0,0,0,80,457,1,0,0,0,82,459,1,0,0,0,84,461,1,0,0,
  	0,86,463,1,0,0,0,88,465,1,0,0,0,90,467,1,0,0,0,92,469,1,0,0,0,94,471,
  	1,0,0,0,96,473,1,0,0,0,98,475,1,0,0,0,100,102,5,67,0,0,101,100,1,0,0,
  	0,101,102,1,0,0,0,102,103,1,0,0,0,103,104,3,2,1,0,104,105,5,0,0,1,105,
  	1,1,0,0,0,106,108,3,4,2,0,107,106,1,0,0,0,108,111,1,0,0,0,109,107,1,0,
  	0,0,109,110,1,0,0,0,110,113,1,0,0,0,111,109,1,0,0,0,112,114,3,30,15,0,
  	113,112,1,0,0,0,113,114,1,0,0,0,114,3,1,0,0,0,115,131,5,41,0,0,116,131,
  	3,6,3,0,117,131,3,8,4,0,118,131,3,32,16,0,119,131,5,28,0,0,120,131,3,
  	10,5,0,121,131,3,12,6,0,122,131,3,14,7,0,123,131,3,16,8,0,124,131,3,18,
  	9,0,125,131,3,20,10,0,126,131,3,22,11,0,127,131,3,24,12,0,128,131,3,26,
  	13,0,129,131,3,28,14,0,130,115,1,0,0,0,130,116,1,0,0,0,130,117,1,0,0,
  	0,130,118,1,0,0,0,130,119,1,0,0,0,130,120,1,0,0,0,130,121,1,0,0,0,130,
  	122,1,0,0,0,130,123,1,0,0,0,130,124,1,0,0,0,130,125,1,0,0,0,130,126,1,
  	0,0,0,130,127,1,0,0,0,130,128,1,0,0,0,130,129,1,0,0,0,131,5,1,0,0,0,132,
  	133,3,36,18,0,133,134,5,44,0,0,134,136,3,44,22,0,135,137,5,41,0,0,136,
  	135,1,0,0,0,136,137,1,0,0,0,137,7,1,0,0,0,138,140,3,52,26,0,139,141,3,
  	58,29,0,140,139,1,0,0,0,141,142,1,0,0,0,142,140,1,0,0,0,142,143,1,0,0,
  	0,143,145,1,0,0,0,144,146,5,41,0,0,145,144,1,0,0,0,145,146,1,0,0,0,146,
  	9,1,0,0,0,147,148,5,31,0,0,148,149,5,56,0,0,149,11,1,0,0,0,150,151,5,
  	29,0,0,151,152,3,2,1,0,152,153,5,30,0,0,153,13,1,0,0,0,154,155,5,32,0,
  	0,155,156,3,46,23,0,156,157,5,29,0,0,157,158,3,2,1,0,158,159,5,30,0,0,
  	159,15,1,0,0,0,160,161,5,33,0,0,161,162,3,2,1,0,162,163,5,34,0,0,163,
  	165,3,46,23,0,164,166,5,41,0,0,165,164,1,0,0,0,165,166,1,0,0,0,166,17,
  	1,0,0,0,167,168,5,36,0,0,168,169,3,46,23,0,169,170,5,37,0,0,170,178,3,
  	2,1,0,171,172,5,39,0,0,172,173,3,46,23,0,173,174,5,37,0,0,174,175,3,2,
  	1,0,175,177,1,0,0,0,176,171,1,0,0,0,177,180,1,0,0,0,178,176,1,0,0,0,178,
  	179,1,0,0,0,179,183,1,0,0,0,180,178,1,0,0,0,181,182,5,38,0,0,182,184,
  	3,2,1,0,183,181,1,0,0,0,183,184,1,0,0,0,184,185,1,0,0,0,185,186,5,30,
  	0,0,186,19,1,0,0,0,187,188,5,35,0,0,188,189,5,56,0,0,189,190,5,44,0,0,
  	190,191,3,46,23,0,191,192,5,42,0,0,192,195,3,46,23,0,193,194,5,42,0,0,
  	194,196,3,46,23,0,195,193,1,0,0,0,195,196,1,0,0,0,196,197,1,0,0,0,197,
  	198,5,29,0,0,198,199,3,2,1,0,199,200,5,30,0,0,200,21,1,0,0,0,201,202,
  	5,35,0,0,202,203,3,38,19,0,203,204,5,40,0,0,204,205,3,44,22,0,205,206,
  	5,29,0,0,206,207,3,2,1,0,207,208,5,30,0,0,208,23,1,0,0,0,209,210,5,22,
  	0,0,210,211,3,34,17,0,211,212,3,64,32,0,212,25,1,0,0,0,213,214,5,24,0,
  	0,214,215,5,22,0,0,215,216,5,56,0,0,216,217,3,64,32,0,217,27,1,0,0,0,
  	218,219,5,24,0,0,219,222,3,40,20,0,220,221,5,44,0,0,221,223,3,44,22,0,
  	222,220,1,0,0,0,222,223,1,0,0,0,223,225,1,0,0,0,224,226,5,41,0,0,225,
  	224,1,0,0,0,225,226,1,0,0,0,226,29,1,0,0,0,227,229,5,23,0,0,228,230,3,
  	44,22,0,229,228,1,0,0,0,229,230,1,0,0,0,230,232,1,0,0,0,231,233,5,41,
  	0,0,232,231,1,0,0,0,232,233,1,0,0,0,233,31,1,0,0,0,234,235,5,46,0,0,235,
  	236,5,56,0,0,236,237,5,46,0,0,237,33,1,0,0,0,238,243,5,56,0,0,239,240,
  	5,43,0,0,240,242,5,56,0,0,241,239,1,0,0,0,242,245,1,0,0,0,243,241,1,0,
  	0,0,243,244,1,0,0,0,244,248,1,0,0,0,245,243,1,0,0,0,246,247,5,45,0,0,
  	247,249,5,56,0,0,248,246,1,0,0,0,248,249,1,0,0,0,249,35,1,0,0,0,250,255,
  	3,54,27,0,251,252,5,42,0,0,252,254,3,54,27,0,253,251,1,0,0,0,254,257,
  	1,0,0,0,255,253,1,0,0,0,255,256,1,0,0,0,256,37,1,0,0,0,257,255,1,0,0,
  	0,258,263,5,56,0,0,259,260,5,42,0,0,260,262,5,56,0,0,261,259,1,0,0,0,
  	262,265,1,0,0,0,263,261,1,0,0,0,263,264,1,0,0,0,264,39,1,0,0,0,265,263,
  	1,0,0,0,266,271,3,42,21,0,267,268,5,42,0,0,268,270,3,42,21,0,269,267,
  	1,0,0,0,270,273,1,0,0,0,271,269,1,0,0,0,271,272,1,0,0,0,272,41,1,0,0,
  	0,273,271,1,0,0,0,274,278,5,56,0,0,275,276,5,48,0,0,276,277,5,56,0,0,
  	277,279,5,49,0,0,278,275,1,0,0,0,278,279,1,0,0,0,279,43,1,0,0,0,280,285,
  	3,46,23,0,281,282,5,42,0,0,282,284,3,46,23,0,283,281,1,0,0,0,284,287,
  	1,0,0,0,285,283,1,0,0,0,285,286,1,0,0,0,286,45,1,0,0,0,287,285,1,0,0,
  	0,288,289,6,23,-1,0,289,303,5,27,0,0,290,303,5,26,0,0,291,303,5,25,0,
  	0,292,303,3,96,48,0,293,303,3,98,49,0,294,303,5,47,0,0,295,303,3,50,25,
  	0,296,303,3,62,31,0,297,303,3,68,34,0,298,303,3,48,24,0,299,300,3,94,
  	47,0,300,301,3,46,23,8,301,303,1,0,0,0,302,288,1,0,0,0,302,290,1,0,0,
  	0,302,291,1,0,0,0,302,292,1,0,0,0,302,293,1,0,0,0,302,294,1,0,0,0,302,
  	295,1,0,0,0,302,296,1,0,0,0,302,297,1,0,0,0,302,298,1,0,0,0,302,299,1,
  	0,0,0,303,338,1,0,0,0,304,305,10,9,0,0,305,306,3,92,46,0,306,307,3,46,
  	23,9,307,337,1,0,0,0,308,309,10,7,0,0,309,310,3,86,43,0,310,311,3,46,
  	23,8,311,337,1,0,0,0,312,313,10,6,0,0,313,314,3,84,42,0,314,315,3,46,
  	23,7,315,337,1,0,0,0,316,317,10,5,0,0,317,318,3,82,41,0,318,319,3,46,
  	23,5,319,337,1,0,0,0,320,321,10,4,0,0,321,322,3,80,40,0,322,323,3,46,
  	23,5,323,337,1,0,0,0,324,325,10,3,0,0,325,326,3,78,39,0,326,327,3,46,
  	23,4,327,337,1,0,0,0,328,329,10,2,0,0,329,330,3,76,38,0,330,331,3,46,
  	23,3,331,337,1,0,0,0,332,333,10,1,0,0,333,334,3,88,44,0,334,335,3,46,
  	23,2,335,337,1,0,0,0,336,304,1,0,0,0,336,308,1,0,0,0,336,312,1,0,0,0,
  	336,316,1,0,0,0,336,320,1,0,0,0,336,324,1,0,0,0,336,328,1,0,0,0,336,332,
  	1,0,0,0,337,340,1,0,0,0,338,336,1,0,0,0,338,339,1,0,0,0,339,47,1,0,0,
  	0,340,338,1,0,0,0,341,342,3,98,49,0,342,343,3,82,41,0,343,344,3,98,49,
  	0,344,49,1,0,0,0,345,349,3,52,26,0,346,348,3,58,29,0,347,346,1,0,0,0,
  	348,351,1,0,0,0,349,347,1,0,0,0,349,350,1,0,0,0,350,51,1,0,0,0,351,349,
  	1,0,0,0,352,358,3,54,27,0,353,354,5,50,0,0,354,355,3,46,23,0,355,356,
  	5,51,0,0,356,358,1,0,0,0,357,352,1,0,0,0,357,353,1,0,0,0,358,53,1,0,0,
  	0,359,366,5,56,0,0,360,361,5,50,0,0,361,362,3,46,23,0,362,363,5,51,0,
  	0,363,364,3,56,28,0,364,366,1,0,0,0,365,359,1,0,0,0,365,360,1,0,0,0,366,
  	370,1,0,0,0,367,369,3,56,28,0,368,367,1,0,0,0,369,372,1,0,0,0,370,368,
  	1,0,0,0,370,371,1,0,0,0,371,55,1,0,0,0,372,370,1,0,0,0,373,375,3,58,29,
  	0,374,373,1,0,0,0,375,378,1,0,0,0,376,374,1,0,0,0,376,377,1,0,0,0,377,
  	385,1,0,0,0,378,376,1,0,0,0,379,380,5,54,0,0,380,381,3,46,23,0,381,382,
  	5,55,0,0,382,386,1,0,0,0,383,384,5,43,0,0,384,386,5,56,0,0,385,379,1,
  	0,0,0,385,383,1,0,0,0,386,57,1,0,0,0,387,388,5,45,0,0,388,390,5,56,0,
  	0,389,387,1,0,0,0,389,390,1,0,0,0,390,391,1,0,0,0,391,392,3,60,30,0,392,
  	59,1,0,0,0,393,395,5,50,0,0,394,396,3,44,22,0,395,394,1,0,0,0,395,396,
  	1,0,0,0,396,397,1,0,0,0,397,401,5,51,0,0,398,401,3,68,34,0,399,401,3,
  	98,49,0,400,393,1,0,0,0,400,398,1,0,0,0,400,399,1,0,0,0,401,61,1,0,0,
  	0,402,403,5,22,0,0,403,404,3,64,32,0,404,63,1,0,0,0,405,407,5,50,0,0,
  	406,408,3,66,33,0,407,406,1,0,0,0,407,408,1,0,0,0,408,409,1,0,0,0,409,
  	410,5,51,0,0,410,411,3,2,1,0,411,412,5,30,0,0,412,65,1,0,0,0,413,416,
  	3,38,19,0,414,415,5,42,0,0,415,417,5,47,0,0,416,414,1,0,0,0,416,417,1,
  	0,0,0,417,420,1,0,0,0,418,420,5,47,0,0,419,413,1,0,0,0,419,418,1,0,0,
  	0,420,67,1,0,0,0,421,423,5,52,0,0,422,424,3,70,35,0,423,422,1,0,0,0,423,
  	424,1,0,0,0,424,425,1,0,0,0,425,426,5,53,0,0,426,69,1,0,0,0,427,433,3,
  	72,36,0,428,429,3,74,37,0,429,430,3,72,36,0,430,432,1,0,0,0,431,428,1,
  	0,0,0,432,435,1,0,0,0,433,431,1,0,0,0,433,434,1,0,0,0,434,437,1,0,0,0,
  	435,433,1,0,0,0,436,438,3,74,37,0,437,436,1,0,0,0,437,438,1,0,0,0,438,
  	71,1,0,0,0,439,440,5,54,0,0,440,441,3,46,23,0,441,442,5,55,0,0,442,443,
  	5,44,0,0,443,444,3,46,23,0,444,450,1,0,0,0,445,446,5,56,0,0,446,447,5,
  	44,0,0,447,450,3,46,23,0,448,450,3,46,23,0,449,439,1,0,0,0,449,445,1,
  	0,0,0,449,448,1,0,0,0,450,73,1,0,0,0,451,452,7,0,0,0,452,75,1,0,0,0,453,
  	454,5,1,0,0,454,77,1,0,0,0,455,456,5,2,0,0,456,79,1,0,0,0,457,458,7,1,
  	0,0,458,81,1,0,0,0,459,460,5,7,0,0,460,83,1,0,0,0,461,462,7,2,0,0,462,
  	85,1,0,0,0,463,464,7,3,0,0,464,87,1,0,0,0,465,466,7,4,0,0,466,89,1,0,
  	0,0,467,468,7,5,0,0,468,91,1,0,0,0,469,470,5,21,0,0,470,93,1,0,0,0,471,
  	472,7,5,0,0,472,95,1,0,0,0,473,474,7,6,0,0,474,97,1,0,0,0,475,476,7,7,
  	0,0,476,99,1,0,0,0,41,101,109,113,130,136,142,145,165,178,183,195,222,
  	225,229,232,243,248,255,263,271,278,285,302,336,338,349,357,365,370,376,
  	385,389,395,400,407,416,419,423,433,437,449
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  luaParserStaticData = std::move(staticData);
}

}

LuaParser::LuaParser(TokenStream *input) : LuaParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

LuaParser::LuaParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  LuaParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *luaParserStaticData->atn, luaParserStaticData->decisionToDFA, luaParserStaticData->sharedContextCache, options);
}

LuaParser::~LuaParser() {
  delete _interpreter;
}

const atn::ATN& LuaParser::getATN() const {
  return *luaParserStaticData->atn;
}

std::string LuaParser::getGrammarFileName() const {
  return "Lua.g4";
}

const std::vector<std::string>& LuaParser::getRuleNames() const {
  return luaParserStaticData->ruleNames;
}

const dfa::Vocabulary& LuaParser::getVocabulary() const {
  return luaParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView LuaParser::getSerializedATN() const {
  return luaParserStaticData->serializedATN;
}


//----------------- ChunkContext ------------------------------------------------------------------

LuaParser::ChunkContext::ChunkContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LuaParser::BlockContext* LuaParser::ChunkContext::block() {
  return getRuleContext<LuaParser::BlockContext>(0);
}

tree::TerminalNode* LuaParser::ChunkContext::EOF() {
  return getToken(LuaParser::EOF, 0);
}

tree::TerminalNode* LuaParser::ChunkContext::SHEBANG() {
  return getToken(LuaParser::SHEBANG, 0);
}


size_t LuaParser::ChunkContext::getRuleIndex() const {
  return LuaParser::RuleChunk;
}


std::any LuaParser::ChunkContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LuaVisitor*>(visitor))
    return parserVisitor->visitChunk(this);
  else
    return visitor->visitChildren(this);
}

LuaParser::ChunkContext* LuaParser::chunk() {
  ChunkContext *_localctx = _tracker.createInstance<ChunkContext>(_ctx, getState());
  enterRule(_localctx, 0, LuaParser::RuleChunk);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(101);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LuaParser::SHEBANG) {
      setState(100);
      match(LuaParser::SHEBANG);
    }
    setState(103);
    block();
    setState(104);
    match(LuaParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockContext ------------------------------------------------------------------

LuaParser::BlockContext::BlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<LuaParser::StatContext *> LuaParser::BlockContext::stat() {
  return getRuleContexts<LuaParser::StatContext>();
}

LuaParser::StatContext* LuaParser::BlockContext::stat(size_t i) {
  return getRuleContext<LuaParser::StatContext>(i);
}

LuaParser::RetstatContext* LuaParser::BlockContext::retstat() {
  return getRuleContext<LuaParser::RetstatContext>(0);
}


size_t LuaParser::BlockContext::getRuleIndex() const {
  return LuaParser::RuleBlock;
}


std::any LuaParser::BlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LuaVisitor*>(visitor))
    return parserVisitor->visitBlock(this);
  else
    return visitor->visitChildren(this);
}

LuaParser::BlockContext* LuaParser::block() {
  BlockContext *_localctx = _tracker.createInstance<BlockContext>(_ctx, getState());
  enterRule(_localctx, 2, LuaParser::RuleBlock);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(109);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 73256180650082304) != 0)) {
      setState(106);
      stat();
      setState(111);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(113);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LuaParser::RETURN) {
      setState(112);
      retstat();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatContext ------------------------------------------------------------------

LuaParser::StatContext::StatContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LuaParser::StatContext::SEMI() {
  return getToken(LuaParser::SEMI, 0);
}

LuaParser::VarDeclContext* LuaParser::StatContext::varDecl() {
  return getRuleContext<LuaParser::VarDeclContext>(0);
}

LuaParser::FunctioncallContext* LuaParser::StatContext::functioncall() {
  return getRuleContext<LuaParser::FunctioncallContext>(0);
}

LuaParser::LabelContext* LuaParser::StatContext::label() {
  return getRuleContext<LuaParser::LabelContext>(0);
}

tree::TerminalNode* LuaParser::StatContext::BREAK() {
  return getToken(LuaParser::BREAK, 0);
}

LuaParser::GotoStatContext* LuaParser::StatContext::gotoStat() {
  return getRuleContext<LuaParser::GotoStatContext>(0);
}

LuaParser::DoStatContext* LuaParser::StatContext::doStat() {
  return getRuleContext<LuaParser::DoStatContext>(0);
}

LuaParser::WhileStatContext* LuaParser::StatContext::whileStat() {
  return getRuleContext<LuaParser::WhileStatContext>(0);
}

LuaParser::RepeatStatContext* LuaParser::StatContext::repeatStat() {
  return getRuleContext<LuaParser::RepeatStatContext>(0);
}

LuaParser::IfStatContext* LuaParser::StatContext::ifStat() {
  return getRuleContext<LuaParser::IfStatContext>(0);
}

LuaParser::ForStatContext* LuaParser::StatContext::forStat() {
  return getRuleContext<LuaParser::ForStatContext>(0);
}

LuaParser::ForInStatContext* LuaParser::StatContext::forInStat() {
  return getRuleContext<LuaParser::ForInStatContext>(0);
}

LuaParser::FuncStatContext* LuaParser::StatContext::funcStat() {
  return getRuleContext<LuaParser::FuncStatContext>(0);
}

LuaParser::LocalFuncStatContext* LuaParser::StatContext::localFuncStat() {
  return getRuleContext<LuaParser::LocalFuncStatContext>(0);
}

LuaParser::LocalVarDeclContext* LuaParser::StatContext::localVarDecl() {
  return getRuleContext<LuaParser::LocalVarDeclContext>(0);
}


size_t LuaParser::StatContext::getRuleIndex() const {
  return LuaParser::RuleStat;
}


std::any LuaParser::StatContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LuaVisitor*>(visitor))
    return parserVisitor->visitStat(this);
  else
    return visitor->visitChildren(this);
}

LuaParser::StatContext* LuaParser::stat() {
  StatContext *_localctx = _tracker.createInstance<StatContext>(_ctx, getState());
  enterRule(_localctx, 4, LuaParser::RuleStat);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(130);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(115);
      match(LuaParser::SEMI);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(116);
      varDecl();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(117);
      functioncall();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(118);
      label();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(119);
      match(LuaParser::BREAK);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(120);
      gotoStat();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(121);
      doStat();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(122);
      whileStat();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(123);
      repeatStat();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(124);
      ifStat();
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(125);
      forStat();
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(126);
      forInStat();
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(127);
      funcStat();
      break;
    }

    case 14: {
      enterOuterAlt(_localctx, 14);
      setState(128);
      localFuncStat();
      break;
    }

    case 15: {
      enterOuterAlt(_localctx, 15);
      setState(129);
      localVarDecl();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VarDeclContext ------------------------------------------------------------------

LuaParser::VarDeclContext::VarDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LuaParser::VarlistContext* LuaParser::VarDeclContext::varlist() {
  return getRuleContext<LuaParser::VarlistContext>(0);
}

tree::TerminalNode* LuaParser::VarDeclContext::EQL() {
  return getToken(LuaParser::EQL, 0);
}

LuaParser::ExplistContext* LuaParser::VarDeclContext::explist() {
  return getRuleContext<LuaParser::ExplistContext>(0);
}

tree::TerminalNode* LuaParser::VarDeclContext::SEMI() {
  return getToken(LuaParser::SEMI, 0);
}


size_t LuaParser::VarDeclContext::getRuleIndex() const {
  return LuaParser::RuleVarDecl;
}


std::any LuaParser::VarDeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LuaVisitor*>(visitor))
    return parserVisitor->visitVarDecl(this);
  else
    return visitor->visitChildren(this);
}

LuaParser::VarDeclContext* LuaParser::varDecl() {
  VarDeclContext *_localctx = _tracker.createInstance<VarDeclContext>(_ctx, getState());
  enterRule(_localctx, 6, LuaParser::RuleVarDecl);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(132);
    varlist();
    setState(133);
    match(LuaParser::EQL);
    setState(134);
    explist();
    setState(136);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      setState(135);
      match(LuaParser::SEMI);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctioncallContext ------------------------------------------------------------------

LuaParser::FunctioncallContext::FunctioncallContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LuaParser::VarOrExpContext* LuaParser::FunctioncallContext::varOrExp() {
  return getRuleContext<LuaParser::VarOrExpContext>(0);
}

std::vector<LuaParser::NameAndArgsContext *> LuaParser::FunctioncallContext::nameAndArgs() {
  return getRuleContexts<LuaParser::NameAndArgsContext>();
}

LuaParser::NameAndArgsContext* LuaParser::FunctioncallContext::nameAndArgs(size_t i) {
  return getRuleContext<LuaParser::NameAndArgsContext>(i);
}

tree::TerminalNode* LuaParser::FunctioncallContext::SEMI() {
  return getToken(LuaParser::SEMI, 0);
}


size_t LuaParser::FunctioncallContext::getRuleIndex() const {
  return LuaParser::RuleFunctioncall;
}


std::any LuaParser::FunctioncallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LuaVisitor*>(visitor))
    return parserVisitor->visitFunctioncall(this);
  else
    return visitor->visitChildren(this);
}

LuaParser::FunctioncallContext* LuaParser::functioncall() {
  FunctioncallContext *_localctx = _tracker.createInstance<FunctioncallContext>(_ctx, getState());
  enterRule(_localctx, 8, LuaParser::RuleFunctioncall);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(138);
    varOrExp();
    setState(140); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(139);
              nameAndArgs();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(142); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
    setState(145);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
    case 1: {
      setState(144);
      match(LuaParser::SEMI);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GotoStatContext ------------------------------------------------------------------

LuaParser::GotoStatContext::GotoStatContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LuaParser::GotoStatContext::GOTO() {
  return getToken(LuaParser::GOTO, 0);
}

tree::TerminalNode* LuaParser::GotoStatContext::NAME() {
  return getToken(LuaParser::NAME, 0);
}


size_t LuaParser::GotoStatContext::getRuleIndex() const {
  return LuaParser::RuleGotoStat;
}


std::any LuaParser::GotoStatContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LuaVisitor*>(visitor))
    return parserVisitor->visitGotoStat(this);
  else
    return visitor->visitChildren(this);
}

LuaParser::GotoStatContext* LuaParser::gotoStat() {
  GotoStatContext *_localctx = _tracker.createInstance<GotoStatContext>(_ctx, getState());
  enterRule(_localctx, 10, LuaParser::RuleGotoStat);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(147);
    match(LuaParser::GOTO);
    setState(148);
    match(LuaParser::NAME);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DoStatContext ------------------------------------------------------------------

LuaParser::DoStatContext::DoStatContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LuaParser::DoStatContext::DO() {
  return getToken(LuaParser::DO, 0);
}

LuaParser::BlockContext* LuaParser::DoStatContext::block() {
  return getRuleContext<LuaParser::BlockContext>(0);
}

tree::TerminalNode* LuaParser::DoStatContext::END() {
  return getToken(LuaParser::END, 0);
}


size_t LuaParser::DoStatContext::getRuleIndex() const {
  return LuaParser::RuleDoStat;
}


std::any LuaParser::DoStatContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LuaVisitor*>(visitor))
    return parserVisitor->visitDoStat(this);
  else
    return visitor->visitChildren(this);
}

LuaParser::DoStatContext* LuaParser::doStat() {
  DoStatContext *_localctx = _tracker.createInstance<DoStatContext>(_ctx, getState());
  enterRule(_localctx, 12, LuaParser::RuleDoStat);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(150);
    match(LuaParser::DO);
    setState(151);
    block();
    setState(152);
    match(LuaParser::END);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WhileStatContext ------------------------------------------------------------------

LuaParser::WhileStatContext::WhileStatContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LuaParser::WhileStatContext::WHILE() {
  return getToken(LuaParser::WHILE, 0);
}

LuaParser::ExpContext* LuaParser::WhileStatContext::exp() {
  return getRuleContext<LuaParser::ExpContext>(0);
}

tree::TerminalNode* LuaParser::WhileStatContext::DO() {
  return getToken(LuaParser::DO, 0);
}

LuaParser::BlockContext* LuaParser::WhileStatContext::block() {
  return getRuleContext<LuaParser::BlockContext>(0);
}

tree::TerminalNode* LuaParser::WhileStatContext::END() {
  return getToken(LuaParser::END, 0);
}


size_t LuaParser::WhileStatContext::getRuleIndex() const {
  return LuaParser::RuleWhileStat;
}


std::any LuaParser::WhileStatContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LuaVisitor*>(visitor))
    return parserVisitor->visitWhileStat(this);
  else
    return visitor->visitChildren(this);
}

LuaParser::WhileStatContext* LuaParser::whileStat() {
  WhileStatContext *_localctx = _tracker.createInstance<WhileStatContext>(_ctx, getState());
  enterRule(_localctx, 14, LuaParser::RuleWhileStat);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(154);
    match(LuaParser::WHILE);
    setState(155);
    exp(0);
    setState(156);
    match(LuaParser::DO);
    setState(157);
    block();
    setState(158);
    match(LuaParser::END);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RepeatStatContext ------------------------------------------------------------------

LuaParser::RepeatStatContext::RepeatStatContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LuaParser::RepeatStatContext::REPEAT() {
  return getToken(LuaParser::REPEAT, 0);
}

LuaParser::BlockContext* LuaParser::RepeatStatContext::block() {
  return getRuleContext<LuaParser::BlockContext>(0);
}

tree::TerminalNode* LuaParser::RepeatStatContext::UNTIL() {
  return getToken(LuaParser::UNTIL, 0);
}

LuaParser::ExpContext* LuaParser::RepeatStatContext::exp() {
  return getRuleContext<LuaParser::ExpContext>(0);
}

tree::TerminalNode* LuaParser::RepeatStatContext::SEMI() {
  return getToken(LuaParser::SEMI, 0);
}


size_t LuaParser::RepeatStatContext::getRuleIndex() const {
  return LuaParser::RuleRepeatStat;
}


std::any LuaParser::RepeatStatContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LuaVisitor*>(visitor))
    return parserVisitor->visitRepeatStat(this);
  else
    return visitor->visitChildren(this);
}

LuaParser::RepeatStatContext* LuaParser::repeatStat() {
  RepeatStatContext *_localctx = _tracker.createInstance<RepeatStatContext>(_ctx, getState());
  enterRule(_localctx, 16, LuaParser::RuleRepeatStat);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(160);
    match(LuaParser::REPEAT);
    setState(161);
    block();
    setState(162);
    match(LuaParser::UNTIL);
    setState(163);
    exp(0);
    setState(165);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
    case 1: {
      setState(164);
      match(LuaParser::SEMI);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfStatContext ------------------------------------------------------------------

LuaParser::IfStatContext::IfStatContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LuaParser::IfStatContext::IF() {
  return getToken(LuaParser::IF, 0);
}

std::vector<LuaParser::ExpContext *> LuaParser::IfStatContext::exp() {
  return getRuleContexts<LuaParser::ExpContext>();
}

LuaParser::ExpContext* LuaParser::IfStatContext::exp(size_t i) {
  return getRuleContext<LuaParser::ExpContext>(i);
}

std::vector<tree::TerminalNode *> LuaParser::IfStatContext::THEN() {
  return getTokens(LuaParser::THEN);
}

tree::TerminalNode* LuaParser::IfStatContext::THEN(size_t i) {
  return getToken(LuaParser::THEN, i);
}

std::vector<LuaParser::BlockContext *> LuaParser::IfStatContext::block() {
  return getRuleContexts<LuaParser::BlockContext>();
}

LuaParser::BlockContext* LuaParser::IfStatContext::block(size_t i) {
  return getRuleContext<LuaParser::BlockContext>(i);
}

tree::TerminalNode* LuaParser::IfStatContext::END() {
  return getToken(LuaParser::END, 0);
}

std::vector<tree::TerminalNode *> LuaParser::IfStatContext::ELSEIF() {
  return getTokens(LuaParser::ELSEIF);
}

tree::TerminalNode* LuaParser::IfStatContext::ELSEIF(size_t i) {
  return getToken(LuaParser::ELSEIF, i);
}

tree::TerminalNode* LuaParser::IfStatContext::ELSE() {
  return getToken(LuaParser::ELSE, 0);
}


size_t LuaParser::IfStatContext::getRuleIndex() const {
  return LuaParser::RuleIfStat;
}


std::any LuaParser::IfStatContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LuaVisitor*>(visitor))
    return parserVisitor->visitIfStat(this);
  else
    return visitor->visitChildren(this);
}

LuaParser::IfStatContext* LuaParser::ifStat() {
  IfStatContext *_localctx = _tracker.createInstance<IfStatContext>(_ctx, getState());
  enterRule(_localctx, 18, LuaParser::RuleIfStat);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(167);
    match(LuaParser::IF);
    setState(168);
    exp(0);
    setState(169);
    match(LuaParser::THEN);
    setState(170);
    block();
    setState(178);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == LuaParser::ELSEIF) {
      setState(171);
      match(LuaParser::ELSEIF);
      setState(172);
      exp(0);
      setState(173);
      match(LuaParser::THEN);
      setState(174);
      block();
      setState(180);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(183);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LuaParser::ELSE) {
      setState(181);
      match(LuaParser::ELSE);
      setState(182);
      block();
    }
    setState(185);
    match(LuaParser::END);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForStatContext ------------------------------------------------------------------

LuaParser::ForStatContext::ForStatContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LuaParser::ForStatContext::FOR() {
  return getToken(LuaParser::FOR, 0);
}

tree::TerminalNode* LuaParser::ForStatContext::NAME() {
  return getToken(LuaParser::NAME, 0);
}

tree::TerminalNode* LuaParser::ForStatContext::EQL() {
  return getToken(LuaParser::EQL, 0);
}

std::vector<LuaParser::ExpContext *> LuaParser::ForStatContext::exp() {
  return getRuleContexts<LuaParser::ExpContext>();
}

LuaParser::ExpContext* LuaParser::ForStatContext::exp(size_t i) {
  return getRuleContext<LuaParser::ExpContext>(i);
}

std::vector<tree::TerminalNode *> LuaParser::ForStatContext::COMMA() {
  return getTokens(LuaParser::COMMA);
}

tree::TerminalNode* LuaParser::ForStatContext::COMMA(size_t i) {
  return getToken(LuaParser::COMMA, i);
}

tree::TerminalNode* LuaParser::ForStatContext::DO() {
  return getToken(LuaParser::DO, 0);
}

LuaParser::BlockContext* LuaParser::ForStatContext::block() {
  return getRuleContext<LuaParser::BlockContext>(0);
}

tree::TerminalNode* LuaParser::ForStatContext::END() {
  return getToken(LuaParser::END, 0);
}


size_t LuaParser::ForStatContext::getRuleIndex() const {
  return LuaParser::RuleForStat;
}


std::any LuaParser::ForStatContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LuaVisitor*>(visitor))
    return parserVisitor->visitForStat(this);
  else
    return visitor->visitChildren(this);
}

LuaParser::ForStatContext* LuaParser::forStat() {
  ForStatContext *_localctx = _tracker.createInstance<ForStatContext>(_ctx, getState());
  enterRule(_localctx, 20, LuaParser::RuleForStat);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(187);
    match(LuaParser::FOR);
    setState(188);
    match(LuaParser::NAME);
    setState(189);
    match(LuaParser::EQL);
    setState(190);
    exp(0);
    setState(191);
    match(LuaParser::COMMA);
    setState(192);
    exp(0);
    setState(195);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LuaParser::COMMA) {
      setState(193);
      match(LuaParser::COMMA);
      setState(194);
      exp(0);
    }
    setState(197);
    match(LuaParser::DO);
    setState(198);
    block();
    setState(199);
    match(LuaParser::END);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForInStatContext ------------------------------------------------------------------

LuaParser::ForInStatContext::ForInStatContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LuaParser::ForInStatContext::FOR() {
  return getToken(LuaParser::FOR, 0);
}

LuaParser::NamelistContext* LuaParser::ForInStatContext::namelist() {
  return getRuleContext<LuaParser::NamelistContext>(0);
}

tree::TerminalNode* LuaParser::ForInStatContext::IN() {
  return getToken(LuaParser::IN, 0);
}

LuaParser::ExplistContext* LuaParser::ForInStatContext::explist() {
  return getRuleContext<LuaParser::ExplistContext>(0);
}

tree::TerminalNode* LuaParser::ForInStatContext::DO() {
  return getToken(LuaParser::DO, 0);
}

LuaParser::BlockContext* LuaParser::ForInStatContext::block() {
  return getRuleContext<LuaParser::BlockContext>(0);
}

tree::TerminalNode* LuaParser::ForInStatContext::END() {
  return getToken(LuaParser::END, 0);
}


size_t LuaParser::ForInStatContext::getRuleIndex() const {
  return LuaParser::RuleForInStat;
}


std::any LuaParser::ForInStatContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LuaVisitor*>(visitor))
    return parserVisitor->visitForInStat(this);
  else
    return visitor->visitChildren(this);
}

LuaParser::ForInStatContext* LuaParser::forInStat() {
  ForInStatContext *_localctx = _tracker.createInstance<ForInStatContext>(_ctx, getState());
  enterRule(_localctx, 22, LuaParser::RuleForInStat);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(201);
    match(LuaParser::FOR);
    setState(202);
    namelist();
    setState(203);
    match(LuaParser::IN);
    setState(204);
    explist();
    setState(205);
    match(LuaParser::DO);
    setState(206);
    block();
    setState(207);
    match(LuaParser::END);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FuncStatContext ------------------------------------------------------------------

LuaParser::FuncStatContext::FuncStatContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LuaParser::FuncStatContext::FUNCTION() {
  return getToken(LuaParser::FUNCTION, 0);
}

LuaParser::FuncnameContext* LuaParser::FuncStatContext::funcname() {
  return getRuleContext<LuaParser::FuncnameContext>(0);
}

LuaParser::FuncbodyContext* LuaParser::FuncStatContext::funcbody() {
  return getRuleContext<LuaParser::FuncbodyContext>(0);
}


size_t LuaParser::FuncStatContext::getRuleIndex() const {
  return LuaParser::RuleFuncStat;
}


std::any LuaParser::FuncStatContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LuaVisitor*>(visitor))
    return parserVisitor->visitFuncStat(this);
  else
    return visitor->visitChildren(this);
}

LuaParser::FuncStatContext* LuaParser::funcStat() {
  FuncStatContext *_localctx = _tracker.createInstance<FuncStatContext>(_ctx, getState());
  enterRule(_localctx, 24, LuaParser::RuleFuncStat);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(209);
    match(LuaParser::FUNCTION);
    setState(210);
    funcname();
    setState(211);
    funcbody();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LocalFuncStatContext ------------------------------------------------------------------

LuaParser::LocalFuncStatContext::LocalFuncStatContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LuaParser::LocalFuncStatContext::LOCAL() {
  return getToken(LuaParser::LOCAL, 0);
}

tree::TerminalNode* LuaParser::LocalFuncStatContext::FUNCTION() {
  return getToken(LuaParser::FUNCTION, 0);
}

tree::TerminalNode* LuaParser::LocalFuncStatContext::NAME() {
  return getToken(LuaParser::NAME, 0);
}

LuaParser::FuncbodyContext* LuaParser::LocalFuncStatContext::funcbody() {
  return getRuleContext<LuaParser::FuncbodyContext>(0);
}


size_t LuaParser::LocalFuncStatContext::getRuleIndex() const {
  return LuaParser::RuleLocalFuncStat;
}


std::any LuaParser::LocalFuncStatContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LuaVisitor*>(visitor))
    return parserVisitor->visitLocalFuncStat(this);
  else
    return visitor->visitChildren(this);
}

LuaParser::LocalFuncStatContext* LuaParser::localFuncStat() {
  LocalFuncStatContext *_localctx = _tracker.createInstance<LocalFuncStatContext>(_ctx, getState());
  enterRule(_localctx, 26, LuaParser::RuleLocalFuncStat);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(213);
    match(LuaParser::LOCAL);
    setState(214);
    match(LuaParser::FUNCTION);
    setState(215);
    match(LuaParser::NAME);
    setState(216);
    funcbody();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LocalVarDeclContext ------------------------------------------------------------------

LuaParser::LocalVarDeclContext::LocalVarDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LuaParser::LocalVarDeclContext::LOCAL() {
  return getToken(LuaParser::LOCAL, 0);
}

LuaParser::AttnamelistContext* LuaParser::LocalVarDeclContext::attnamelist() {
  return getRuleContext<LuaParser::AttnamelistContext>(0);
}

tree::TerminalNode* LuaParser::LocalVarDeclContext::EQL() {
  return getToken(LuaParser::EQL, 0);
}

LuaParser::ExplistContext* LuaParser::LocalVarDeclContext::explist() {
  return getRuleContext<LuaParser::ExplistContext>(0);
}

tree::TerminalNode* LuaParser::LocalVarDeclContext::SEMI() {
  return getToken(LuaParser::SEMI, 0);
}


size_t LuaParser::LocalVarDeclContext::getRuleIndex() const {
  return LuaParser::RuleLocalVarDecl;
}


std::any LuaParser::LocalVarDeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LuaVisitor*>(visitor))
    return parserVisitor->visitLocalVarDecl(this);
  else
    return visitor->visitChildren(this);
}

LuaParser::LocalVarDeclContext* LuaParser::localVarDecl() {
  LocalVarDeclContext *_localctx = _tracker.createInstance<LocalVarDeclContext>(_ctx, getState());
  enterRule(_localctx, 28, LuaParser::RuleLocalVarDecl);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(218);
    match(LuaParser::LOCAL);
    setState(219);
    attnamelist();
    setState(222);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LuaParser::EQL) {
      setState(220);
      match(LuaParser::EQL);
      setState(221);
      explist();
    }
    setState(225);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
    case 1: {
      setState(224);
      match(LuaParser::SEMI);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RetstatContext ------------------------------------------------------------------

LuaParser::RetstatContext::RetstatContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LuaParser::RetstatContext::RETURN() {
  return getToken(LuaParser::RETURN, 0);
}

LuaParser::ExplistContext* LuaParser::RetstatContext::explist() {
  return getRuleContext<LuaParser::ExplistContext>(0);
}

tree::TerminalNode* LuaParser::RetstatContext::SEMI() {
  return getToken(LuaParser::SEMI, 0);
}


size_t LuaParser::RetstatContext::getRuleIndex() const {
  return LuaParser::RuleRetstat;
}


std::any LuaParser::RetstatContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LuaVisitor*>(visitor))
    return parserVisitor->visitRetstat(this);
  else
    return visitor->visitChildren(this);
}

LuaParser::RetstatContext* LuaParser::retstat() {
  RetstatContext *_localctx = _tracker.createInstance<RetstatContext>(_ctx, getState());
  enterRule(_localctx, 30, LuaParser::RuleRetstat);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(227);
    match(LuaParser::RETURN);
    setState(229);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & -66287356774645248) != 0)) {
      setState(228);
      explist();
    }
    setState(232);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LuaParser::SEMI) {
      setState(231);
      match(LuaParser::SEMI);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LabelContext ------------------------------------------------------------------

LuaParser::LabelContext::LabelContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> LuaParser::LabelContext::DCOLON() {
  return getTokens(LuaParser::DCOLON);
}

tree::TerminalNode* LuaParser::LabelContext::DCOLON(size_t i) {
  return getToken(LuaParser::DCOLON, i);
}

tree::TerminalNode* LuaParser::LabelContext::NAME() {
  return getToken(LuaParser::NAME, 0);
}


size_t LuaParser::LabelContext::getRuleIndex() const {
  return LuaParser::RuleLabel;
}


std::any LuaParser::LabelContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LuaVisitor*>(visitor))
    return parserVisitor->visitLabel(this);
  else
    return visitor->visitChildren(this);
}

LuaParser::LabelContext* LuaParser::label() {
  LabelContext *_localctx = _tracker.createInstance<LabelContext>(_ctx, getState());
  enterRule(_localctx, 32, LuaParser::RuleLabel);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(234);
    match(LuaParser::DCOLON);
    setState(235);
    match(LuaParser::NAME);
    setState(236);
    match(LuaParser::DCOLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FuncnameContext ------------------------------------------------------------------

LuaParser::FuncnameContext::FuncnameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> LuaParser::FuncnameContext::NAME() {
  return getTokens(LuaParser::NAME);
}

tree::TerminalNode* LuaParser::FuncnameContext::NAME(size_t i) {
  return getToken(LuaParser::NAME, i);
}

std::vector<tree::TerminalNode *> LuaParser::FuncnameContext::DOT() {
  return getTokens(LuaParser::DOT);
}

tree::TerminalNode* LuaParser::FuncnameContext::DOT(size_t i) {
  return getToken(LuaParser::DOT, i);
}

tree::TerminalNode* LuaParser::FuncnameContext::COLON() {
  return getToken(LuaParser::COLON, 0);
}


size_t LuaParser::FuncnameContext::getRuleIndex() const {
  return LuaParser::RuleFuncname;
}


std::any LuaParser::FuncnameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LuaVisitor*>(visitor))
    return parserVisitor->visitFuncname(this);
  else
    return visitor->visitChildren(this);
}

LuaParser::FuncnameContext* LuaParser::funcname() {
  FuncnameContext *_localctx = _tracker.createInstance<FuncnameContext>(_ctx, getState());
  enterRule(_localctx, 34, LuaParser::RuleFuncname);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(238);
    match(LuaParser::NAME);
    setState(243);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == LuaParser::DOT) {
      setState(239);
      match(LuaParser::DOT);
      setState(240);
      match(LuaParser::NAME);
      setState(245);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(248);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LuaParser::COLON) {
      setState(246);
      match(LuaParser::COLON);
      setState(247);
      match(LuaParser::NAME);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VarlistContext ------------------------------------------------------------------

LuaParser::VarlistContext::VarlistContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<LuaParser::VarContext *> LuaParser::VarlistContext::var() {
  return getRuleContexts<LuaParser::VarContext>();
}

LuaParser::VarContext* LuaParser::VarlistContext::var(size_t i) {
  return getRuleContext<LuaParser::VarContext>(i);
}

std::vector<tree::TerminalNode *> LuaParser::VarlistContext::COMMA() {
  return getTokens(LuaParser::COMMA);
}

tree::TerminalNode* LuaParser::VarlistContext::COMMA(size_t i) {
  return getToken(LuaParser::COMMA, i);
}


size_t LuaParser::VarlistContext::getRuleIndex() const {
  return LuaParser::RuleVarlist;
}


std::any LuaParser::VarlistContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LuaVisitor*>(visitor))
    return parserVisitor->visitVarlist(this);
  else
    return visitor->visitChildren(this);
}

LuaParser::VarlistContext* LuaParser::varlist() {
  VarlistContext *_localctx = _tracker.createInstance<VarlistContext>(_ctx, getState());
  enterRule(_localctx, 36, LuaParser::RuleVarlist);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(250);
    var();
    setState(255);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == LuaParser::COMMA) {
      setState(251);
      match(LuaParser::COMMA);
      setState(252);
      var();
      setState(257);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NamelistContext ------------------------------------------------------------------

LuaParser::NamelistContext::NamelistContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> LuaParser::NamelistContext::NAME() {
  return getTokens(LuaParser::NAME);
}

tree::TerminalNode* LuaParser::NamelistContext::NAME(size_t i) {
  return getToken(LuaParser::NAME, i);
}

std::vector<tree::TerminalNode *> LuaParser::NamelistContext::COMMA() {
  return getTokens(LuaParser::COMMA);
}

tree::TerminalNode* LuaParser::NamelistContext::COMMA(size_t i) {
  return getToken(LuaParser::COMMA, i);
}


size_t LuaParser::NamelistContext::getRuleIndex() const {
  return LuaParser::RuleNamelist;
}


std::any LuaParser::NamelistContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LuaVisitor*>(visitor))
    return parserVisitor->visitNamelist(this);
  else
    return visitor->visitChildren(this);
}

LuaParser::NamelistContext* LuaParser::namelist() {
  NamelistContext *_localctx = _tracker.createInstance<NamelistContext>(_ctx, getState());
  enterRule(_localctx, 38, LuaParser::RuleNamelist);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(258);
    match(LuaParser::NAME);
    setState(263);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(259);
        match(LuaParser::COMMA);
        setState(260);
        match(LuaParser::NAME); 
      }
      setState(265);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AttnamelistContext ------------------------------------------------------------------

LuaParser::AttnamelistContext::AttnamelistContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<LuaParser::NameattribContext *> LuaParser::AttnamelistContext::nameattrib() {
  return getRuleContexts<LuaParser::NameattribContext>();
}

LuaParser::NameattribContext* LuaParser::AttnamelistContext::nameattrib(size_t i) {
  return getRuleContext<LuaParser::NameattribContext>(i);
}

std::vector<tree::TerminalNode *> LuaParser::AttnamelistContext::COMMA() {
  return getTokens(LuaParser::COMMA);
}

tree::TerminalNode* LuaParser::AttnamelistContext::COMMA(size_t i) {
  return getToken(LuaParser::COMMA, i);
}


size_t LuaParser::AttnamelistContext::getRuleIndex() const {
  return LuaParser::RuleAttnamelist;
}


std::any LuaParser::AttnamelistContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LuaVisitor*>(visitor))
    return parserVisitor->visitAttnamelist(this);
  else
    return visitor->visitChildren(this);
}

LuaParser::AttnamelistContext* LuaParser::attnamelist() {
  AttnamelistContext *_localctx = _tracker.createInstance<AttnamelistContext>(_ctx, getState());
  enterRule(_localctx, 40, LuaParser::RuleAttnamelist);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(266);
    nameattrib();
    setState(271);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == LuaParser::COMMA) {
      setState(267);
      match(LuaParser::COMMA);
      setState(268);
      nameattrib();
      setState(273);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NameattribContext ------------------------------------------------------------------

LuaParser::NameattribContext::NameattribContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> LuaParser::NameattribContext::NAME() {
  return getTokens(LuaParser::NAME);
}

tree::TerminalNode* LuaParser::NameattribContext::NAME(size_t i) {
  return getToken(LuaParser::NAME, i);
}

tree::TerminalNode* LuaParser::NameattribContext::LT() {
  return getToken(LuaParser::LT, 0);
}

tree::TerminalNode* LuaParser::NameattribContext::GT() {
  return getToken(LuaParser::GT, 0);
}


size_t LuaParser::NameattribContext::getRuleIndex() const {
  return LuaParser::RuleNameattrib;
}


std::any LuaParser::NameattribContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LuaVisitor*>(visitor))
    return parserVisitor->visitNameattrib(this);
  else
    return visitor->visitChildren(this);
}

LuaParser::NameattribContext* LuaParser::nameattrib() {
  NameattribContext *_localctx = _tracker.createInstance<NameattribContext>(_ctx, getState());
  enterRule(_localctx, 42, LuaParser::RuleNameattrib);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(274);
    match(LuaParser::NAME);
    setState(278);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LuaParser::LT) {
      setState(275);
      match(LuaParser::LT);
      setState(276);
      match(LuaParser::NAME);
      setState(277);
      match(LuaParser::GT);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExplistContext ------------------------------------------------------------------

LuaParser::ExplistContext::ExplistContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<LuaParser::ExpContext *> LuaParser::ExplistContext::exp() {
  return getRuleContexts<LuaParser::ExpContext>();
}

LuaParser::ExpContext* LuaParser::ExplistContext::exp(size_t i) {
  return getRuleContext<LuaParser::ExpContext>(i);
}

std::vector<tree::TerminalNode *> LuaParser::ExplistContext::COMMA() {
  return getTokens(LuaParser::COMMA);
}

tree::TerminalNode* LuaParser::ExplistContext::COMMA(size_t i) {
  return getToken(LuaParser::COMMA, i);
}


size_t LuaParser::ExplistContext::getRuleIndex() const {
  return LuaParser::RuleExplist;
}


std::any LuaParser::ExplistContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LuaVisitor*>(visitor))
    return parserVisitor->visitExplist(this);
  else
    return visitor->visitChildren(this);
}

LuaParser::ExplistContext* LuaParser::explist() {
  ExplistContext *_localctx = _tracker.createInstance<ExplistContext>(_ctx, getState());
  enterRule(_localctx, 44, LuaParser::RuleExplist);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(280);
    exp(0);
    setState(285);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == LuaParser::COMMA) {
      setState(281);
      match(LuaParser::COMMA);
      setState(282);
      exp(0);
      setState(287);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpContext ------------------------------------------------------------------

LuaParser::ExpContext::ExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LuaParser::ExpContext::NIL() {
  return getToken(LuaParser::NIL, 0);
}

tree::TerminalNode* LuaParser::ExpContext::FALSE() {
  return getToken(LuaParser::FALSE, 0);
}

tree::TerminalNode* LuaParser::ExpContext::TRUE() {
  return getToken(LuaParser::TRUE, 0);
}

LuaParser::NumberContext* LuaParser::ExpContext::number() {
  return getRuleContext<LuaParser::NumberContext>(0);
}

LuaParser::StringContext* LuaParser::ExpContext::string() {
  return getRuleContext<LuaParser::StringContext>(0);
}

tree::TerminalNode* LuaParser::ExpContext::ELLIPSIS() {
  return getToken(LuaParser::ELLIPSIS, 0);
}

LuaParser::PrefixexpContext* LuaParser::ExpContext::prefixexp() {
  return getRuleContext<LuaParser::PrefixexpContext>(0);
}

LuaParser::FunctiondefContext* LuaParser::ExpContext::functiondef() {
  return getRuleContext<LuaParser::FunctiondefContext>(0);
}

LuaParser::TableconstructorContext* LuaParser::ExpContext::tableconstructor() {
  return getRuleContext<LuaParser::TableconstructorContext>(0);
}

LuaParser::LongStringContext* LuaParser::ExpContext::longString() {
  return getRuleContext<LuaParser::LongStringContext>(0);
}

LuaParser::UnaryOperatorContext* LuaParser::ExpContext::unaryOperator() {
  return getRuleContext<LuaParser::UnaryOperatorContext>(0);
}

std::vector<LuaParser::ExpContext *> LuaParser::ExpContext::exp() {
  return getRuleContexts<LuaParser::ExpContext>();
}

LuaParser::ExpContext* LuaParser::ExpContext::exp(size_t i) {
  return getRuleContext<LuaParser::ExpContext>(i);
}

LuaParser::OperatorPowerContext* LuaParser::ExpContext::operatorPower() {
  return getRuleContext<LuaParser::OperatorPowerContext>(0);
}

LuaParser::OperatorMulDivModContext* LuaParser::ExpContext::operatorMulDivMod() {
  return getRuleContext<LuaParser::OperatorMulDivModContext>(0);
}

LuaParser::OperatorAddSubContext* LuaParser::ExpContext::operatorAddSub() {
  return getRuleContext<LuaParser::OperatorAddSubContext>(0);
}

LuaParser::OperatorStrcatContext* LuaParser::ExpContext::operatorStrcat() {
  return getRuleContext<LuaParser::OperatorStrcatContext>(0);
}

LuaParser::OperatorComparisonContext* LuaParser::ExpContext::operatorComparison() {
  return getRuleContext<LuaParser::OperatorComparisonContext>(0);
}

LuaParser::OperatorAndContext* LuaParser::ExpContext::operatorAnd() {
  return getRuleContext<LuaParser::OperatorAndContext>(0);
}

LuaParser::OperatorOrContext* LuaParser::ExpContext::operatorOr() {
  return getRuleContext<LuaParser::OperatorOrContext>(0);
}

LuaParser::OperatorBitwiseContext* LuaParser::ExpContext::operatorBitwise() {
  return getRuleContext<LuaParser::OperatorBitwiseContext>(0);
}


size_t LuaParser::ExpContext::getRuleIndex() const {
  return LuaParser::RuleExp;
}


std::any LuaParser::ExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LuaVisitor*>(visitor))
    return parserVisitor->visitExp(this);
  else
    return visitor->visitChildren(this);
}


LuaParser::ExpContext* LuaParser::exp() {
   return exp(0);
}

LuaParser::ExpContext* LuaParser::exp(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  LuaParser::ExpContext *_localctx = _tracker.createInstance<ExpContext>(_ctx, parentState);
  LuaParser::ExpContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 46;
  enterRecursionRule(_localctx, 46, LuaParser::RuleExp, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(302);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx)) {
    case 1: {
      setState(289);
      match(LuaParser::NIL);
      break;
    }

    case 2: {
      setState(290);
      match(LuaParser::FALSE);
      break;
    }

    case 3: {
      setState(291);
      match(LuaParser::TRUE);
      break;
    }

    case 4: {
      setState(292);
      number();
      break;
    }

    case 5: {
      setState(293);
      string();
      break;
    }

    case 6: {
      setState(294);
      match(LuaParser::ELLIPSIS);
      break;
    }

    case 7: {
      setState(295);
      prefixexp();
      break;
    }

    case 8: {
      setState(296);
      functiondef();
      break;
    }

    case 9: {
      setState(297);
      tableconstructor();
      break;
    }

    case 10: {
      setState(298);
      longString();
      break;
    }

    case 11: {
      setState(299);
      unaryOperator();
      setState(300);
      exp(8);
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(338);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(336);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ExpContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExp);
          setState(304);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(305);
          operatorPower();
          setState(306);
          exp(9);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ExpContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExp);
          setState(308);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(309);
          operatorMulDivMod();
          setState(310);
          exp(8);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<ExpContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExp);
          setState(312);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(313);
          operatorAddSub();
          setState(314);
          exp(7);
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<ExpContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExp);
          setState(316);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(317);
          operatorStrcat();
          setState(318);
          exp(5);
          break;
        }

        case 5: {
          _localctx = _tracker.createInstance<ExpContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExp);
          setState(320);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(321);
          operatorComparison();
          setState(322);
          exp(5);
          break;
        }

        case 6: {
          _localctx = _tracker.createInstance<ExpContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExp);
          setState(324);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(325);
          operatorAnd();
          setState(326);
          exp(4);
          break;
        }

        case 7: {
          _localctx = _tracker.createInstance<ExpContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExp);
          setState(328);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(329);
          operatorOr();
          setState(330);
          exp(3);
          break;
        }

        case 8: {
          _localctx = _tracker.createInstance<ExpContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExp);
          setState(332);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(333);
          operatorBitwise();
          setState(334);
          exp(2);
          break;
        }

        default:
          break;
        } 
      }
      setState(340);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- LongStringContext ------------------------------------------------------------------

LuaParser::LongStringContext::LongStringContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<LuaParser::StringContext *> LuaParser::LongStringContext::string() {
  return getRuleContexts<LuaParser::StringContext>();
}

LuaParser::StringContext* LuaParser::LongStringContext::string(size_t i) {
  return getRuleContext<LuaParser::StringContext>(i);
}

LuaParser::OperatorStrcatContext* LuaParser::LongStringContext::operatorStrcat() {
  return getRuleContext<LuaParser::OperatorStrcatContext>(0);
}


size_t LuaParser::LongStringContext::getRuleIndex() const {
  return LuaParser::RuleLongString;
}


std::any LuaParser::LongStringContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LuaVisitor*>(visitor))
    return parserVisitor->visitLongString(this);
  else
    return visitor->visitChildren(this);
}

LuaParser::LongStringContext* LuaParser::longString() {
  LongStringContext *_localctx = _tracker.createInstance<LongStringContext>(_ctx, getState());
  enterRule(_localctx, 48, LuaParser::RuleLongString);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(341);
    string();
    setState(342);
    operatorStrcat();
    setState(343);
    string();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrefixexpContext ------------------------------------------------------------------

LuaParser::PrefixexpContext::PrefixexpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LuaParser::VarOrExpContext* LuaParser::PrefixexpContext::varOrExp() {
  return getRuleContext<LuaParser::VarOrExpContext>(0);
}

std::vector<LuaParser::NameAndArgsContext *> LuaParser::PrefixexpContext::nameAndArgs() {
  return getRuleContexts<LuaParser::NameAndArgsContext>();
}

LuaParser::NameAndArgsContext* LuaParser::PrefixexpContext::nameAndArgs(size_t i) {
  return getRuleContext<LuaParser::NameAndArgsContext>(i);
}


size_t LuaParser::PrefixexpContext::getRuleIndex() const {
  return LuaParser::RulePrefixexp;
}


std::any LuaParser::PrefixexpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LuaVisitor*>(visitor))
    return parserVisitor->visitPrefixexp(this);
  else
    return visitor->visitChildren(this);
}

LuaParser::PrefixexpContext* LuaParser::prefixexp() {
  PrefixexpContext *_localctx = _tracker.createInstance<PrefixexpContext>(_ctx, getState());
  enterRule(_localctx, 50, LuaParser::RulePrefixexp);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(345);
    varOrExp();
    setState(349);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 25, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(346);
        nameAndArgs(); 
      }
      setState(351);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 25, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VarOrExpContext ------------------------------------------------------------------

LuaParser::VarOrExpContext::VarOrExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LuaParser::VarContext* LuaParser::VarOrExpContext::var() {
  return getRuleContext<LuaParser::VarContext>(0);
}

tree::TerminalNode* LuaParser::VarOrExpContext::LP() {
  return getToken(LuaParser::LP, 0);
}

LuaParser::ExpContext* LuaParser::VarOrExpContext::exp() {
  return getRuleContext<LuaParser::ExpContext>(0);
}

tree::TerminalNode* LuaParser::VarOrExpContext::RP() {
  return getToken(LuaParser::RP, 0);
}


size_t LuaParser::VarOrExpContext::getRuleIndex() const {
  return LuaParser::RuleVarOrExp;
}


std::any LuaParser::VarOrExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LuaVisitor*>(visitor))
    return parserVisitor->visitVarOrExp(this);
  else
    return visitor->visitChildren(this);
}

LuaParser::VarOrExpContext* LuaParser::varOrExp() {
  VarOrExpContext *_localctx = _tracker.createInstance<VarOrExpContext>(_ctx, getState());
  enterRule(_localctx, 52, LuaParser::RuleVarOrExp);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(357);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 26, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(352);
      var();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(353);
      match(LuaParser::LP);
      setState(354);
      exp(0);
      setState(355);
      match(LuaParser::RP);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VarContext ------------------------------------------------------------------

LuaParser::VarContext::VarContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LuaParser::VarContext::NAME() {
  return getToken(LuaParser::NAME, 0);
}

tree::TerminalNode* LuaParser::VarContext::LP() {
  return getToken(LuaParser::LP, 0);
}

LuaParser::ExpContext* LuaParser::VarContext::exp() {
  return getRuleContext<LuaParser::ExpContext>(0);
}

tree::TerminalNode* LuaParser::VarContext::RP() {
  return getToken(LuaParser::RP, 0);
}

std::vector<LuaParser::VarSuffixContext *> LuaParser::VarContext::varSuffix() {
  return getRuleContexts<LuaParser::VarSuffixContext>();
}

LuaParser::VarSuffixContext* LuaParser::VarContext::varSuffix(size_t i) {
  return getRuleContext<LuaParser::VarSuffixContext>(i);
}


size_t LuaParser::VarContext::getRuleIndex() const {
  return LuaParser::RuleVar;
}


std::any LuaParser::VarContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LuaVisitor*>(visitor))
    return parserVisitor->visitVar(this);
  else
    return visitor->visitChildren(this);
}

LuaParser::VarContext* LuaParser::var() {
  VarContext *_localctx = _tracker.createInstance<VarContext>(_ctx, getState());
  enterRule(_localctx, 54, LuaParser::RuleVar);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(365);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case LuaParser::NAME: {
        setState(359);
        match(LuaParser::NAME);
        break;
      }

      case LuaParser::LP: {
        setState(360);
        match(LuaParser::LP);
        setState(361);
        exp(0);
        setState(362);
        match(LuaParser::RP);
        setState(363);
        varSuffix();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(370);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(367);
        varSuffix(); 
      }
      setState(372);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VarSuffixContext ------------------------------------------------------------------

LuaParser::VarSuffixContext::VarSuffixContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LuaParser::VarSuffixContext::LSB() {
  return getToken(LuaParser::LSB, 0);
}

LuaParser::ExpContext* LuaParser::VarSuffixContext::exp() {
  return getRuleContext<LuaParser::ExpContext>(0);
}

tree::TerminalNode* LuaParser::VarSuffixContext::RSB() {
  return getToken(LuaParser::RSB, 0);
}

tree::TerminalNode* LuaParser::VarSuffixContext::DOT() {
  return getToken(LuaParser::DOT, 0);
}

tree::TerminalNode* LuaParser::VarSuffixContext::NAME() {
  return getToken(LuaParser::NAME, 0);
}

std::vector<LuaParser::NameAndArgsContext *> LuaParser::VarSuffixContext::nameAndArgs() {
  return getRuleContexts<LuaParser::NameAndArgsContext>();
}

LuaParser::NameAndArgsContext* LuaParser::VarSuffixContext::nameAndArgs(size_t i) {
  return getRuleContext<LuaParser::NameAndArgsContext>(i);
}


size_t LuaParser::VarSuffixContext::getRuleIndex() const {
  return LuaParser::RuleVarSuffix;
}


std::any LuaParser::VarSuffixContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LuaVisitor*>(visitor))
    return parserVisitor->visitVarSuffix(this);
  else
    return visitor->visitChildren(this);
}

LuaParser::VarSuffixContext* LuaParser::varSuffix() {
  VarSuffixContext *_localctx = _tracker.createInstance<VarSuffixContext>(_ctx, getState());
  enterRule(_localctx, 56, LuaParser::RuleVarSuffix);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(376);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1014471000437293056) != 0)) {
      setState(373);
      nameAndArgs();
      setState(378);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(385);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case LuaParser::LSB: {
        setState(379);
        match(LuaParser::LSB);
        setState(380);
        exp(0);
        setState(381);
        match(LuaParser::RSB);
        break;
      }

      case LuaParser::DOT: {
        setState(383);
        match(LuaParser::DOT);
        setState(384);
        match(LuaParser::NAME);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NameAndArgsContext ------------------------------------------------------------------

LuaParser::NameAndArgsContext::NameAndArgsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LuaParser::ArgsContext* LuaParser::NameAndArgsContext::args() {
  return getRuleContext<LuaParser::ArgsContext>(0);
}

tree::TerminalNode* LuaParser::NameAndArgsContext::COLON() {
  return getToken(LuaParser::COLON, 0);
}

tree::TerminalNode* LuaParser::NameAndArgsContext::NAME() {
  return getToken(LuaParser::NAME, 0);
}


size_t LuaParser::NameAndArgsContext::getRuleIndex() const {
  return LuaParser::RuleNameAndArgs;
}


std::any LuaParser::NameAndArgsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LuaVisitor*>(visitor))
    return parserVisitor->visitNameAndArgs(this);
  else
    return visitor->visitChildren(this);
}

LuaParser::NameAndArgsContext* LuaParser::nameAndArgs() {
  NameAndArgsContext *_localctx = _tracker.createInstance<NameAndArgsContext>(_ctx, getState());
  enterRule(_localctx, 58, LuaParser::RuleNameAndArgs);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(389);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LuaParser::COLON) {
      setState(387);
      match(LuaParser::COLON);
      setState(388);
      match(LuaParser::NAME);
    }
    setState(391);
    args();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArgsContext ------------------------------------------------------------------

LuaParser::ArgsContext::ArgsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LuaParser::ArgsContext::LP() {
  return getToken(LuaParser::LP, 0);
}

tree::TerminalNode* LuaParser::ArgsContext::RP() {
  return getToken(LuaParser::RP, 0);
}

LuaParser::ExplistContext* LuaParser::ArgsContext::explist() {
  return getRuleContext<LuaParser::ExplistContext>(0);
}

LuaParser::TableconstructorContext* LuaParser::ArgsContext::tableconstructor() {
  return getRuleContext<LuaParser::TableconstructorContext>(0);
}

LuaParser::StringContext* LuaParser::ArgsContext::string() {
  return getRuleContext<LuaParser::StringContext>(0);
}


size_t LuaParser::ArgsContext::getRuleIndex() const {
  return LuaParser::RuleArgs;
}


std::any LuaParser::ArgsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LuaVisitor*>(visitor))
    return parserVisitor->visitArgs(this);
  else
    return visitor->visitChildren(this);
}

LuaParser::ArgsContext* LuaParser::args() {
  ArgsContext *_localctx = _tracker.createInstance<ArgsContext>(_ctx, getState());
  enterRule(_localctx, 60, LuaParser::RuleArgs);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(400);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case LuaParser::LP: {
        enterOuterAlt(_localctx, 1);
        setState(393);
        match(LuaParser::LP);
        setState(395);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & -66287356774645248) != 0)) {
          setState(394);
          explist();
        }
        setState(397);
        match(LuaParser::RP);
        break;
      }

      case LuaParser::LB: {
        enterOuterAlt(_localctx, 2);
        setState(398);
        tableconstructor();
        break;
      }

      case LuaParser::NORMALSTRING:
      case LuaParser::CHARSTRING:
      case LuaParser::LONGSTRING: {
        enterOuterAlt(_localctx, 3);
        setState(399);
        string();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctiondefContext ------------------------------------------------------------------

LuaParser::FunctiondefContext::FunctiondefContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LuaParser::FunctiondefContext::FUNCTION() {
  return getToken(LuaParser::FUNCTION, 0);
}

LuaParser::FuncbodyContext* LuaParser::FunctiondefContext::funcbody() {
  return getRuleContext<LuaParser::FuncbodyContext>(0);
}


size_t LuaParser::FunctiondefContext::getRuleIndex() const {
  return LuaParser::RuleFunctiondef;
}


std::any LuaParser::FunctiondefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LuaVisitor*>(visitor))
    return parserVisitor->visitFunctiondef(this);
  else
    return visitor->visitChildren(this);
}

LuaParser::FunctiondefContext* LuaParser::functiondef() {
  FunctiondefContext *_localctx = _tracker.createInstance<FunctiondefContext>(_ctx, getState());
  enterRule(_localctx, 62, LuaParser::RuleFunctiondef);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(402);
    match(LuaParser::FUNCTION);
    setState(403);
    funcbody();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FuncbodyContext ------------------------------------------------------------------

LuaParser::FuncbodyContext::FuncbodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LuaParser::FuncbodyContext::LP() {
  return getToken(LuaParser::LP, 0);
}

tree::TerminalNode* LuaParser::FuncbodyContext::RP() {
  return getToken(LuaParser::RP, 0);
}

LuaParser::BlockContext* LuaParser::FuncbodyContext::block() {
  return getRuleContext<LuaParser::BlockContext>(0);
}

tree::TerminalNode* LuaParser::FuncbodyContext::END() {
  return getToken(LuaParser::END, 0);
}

LuaParser::ParlistContext* LuaParser::FuncbodyContext::parlist() {
  return getRuleContext<LuaParser::ParlistContext>(0);
}


size_t LuaParser::FuncbodyContext::getRuleIndex() const {
  return LuaParser::RuleFuncbody;
}


std::any LuaParser::FuncbodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LuaVisitor*>(visitor))
    return parserVisitor->visitFuncbody(this);
  else
    return visitor->visitChildren(this);
}

LuaParser::FuncbodyContext* LuaParser::funcbody() {
  FuncbodyContext *_localctx = _tracker.createInstance<FuncbodyContext>(_ctx, getState());
  enterRule(_localctx, 64, LuaParser::RuleFuncbody);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(405);
    match(LuaParser::LP);
    setState(407);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LuaParser::ELLIPSIS

    || _la == LuaParser::NAME) {
      setState(406);
      parlist();
    }
    setState(409);
    match(LuaParser::RP);
    setState(410);
    block();
    setState(411);
    match(LuaParser::END);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParlistContext ------------------------------------------------------------------

LuaParser::ParlistContext::ParlistContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

LuaParser::NamelistContext* LuaParser::ParlistContext::namelist() {
  return getRuleContext<LuaParser::NamelistContext>(0);
}

tree::TerminalNode* LuaParser::ParlistContext::COMMA() {
  return getToken(LuaParser::COMMA, 0);
}

tree::TerminalNode* LuaParser::ParlistContext::ELLIPSIS() {
  return getToken(LuaParser::ELLIPSIS, 0);
}


size_t LuaParser::ParlistContext::getRuleIndex() const {
  return LuaParser::RuleParlist;
}


std::any LuaParser::ParlistContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LuaVisitor*>(visitor))
    return parserVisitor->visitParlist(this);
  else
    return visitor->visitChildren(this);
}

LuaParser::ParlistContext* LuaParser::parlist() {
  ParlistContext *_localctx = _tracker.createInstance<ParlistContext>(_ctx, getState());
  enterRule(_localctx, 66, LuaParser::RuleParlist);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(419);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case LuaParser::NAME: {
        enterOuterAlt(_localctx, 1);
        setState(413);
        namelist();
        setState(416);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == LuaParser::COMMA) {
          setState(414);
          match(LuaParser::COMMA);
          setState(415);
          match(LuaParser::ELLIPSIS);
        }
        break;
      }

      case LuaParser::ELLIPSIS: {
        enterOuterAlt(_localctx, 2);
        setState(418);
        match(LuaParser::ELLIPSIS);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TableconstructorContext ------------------------------------------------------------------

LuaParser::TableconstructorContext::TableconstructorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LuaParser::TableconstructorContext::LB() {
  return getToken(LuaParser::LB, 0);
}

tree::TerminalNode* LuaParser::TableconstructorContext::RB() {
  return getToken(LuaParser::RB, 0);
}

LuaParser::FieldlistContext* LuaParser::TableconstructorContext::fieldlist() {
  return getRuleContext<LuaParser::FieldlistContext>(0);
}


size_t LuaParser::TableconstructorContext::getRuleIndex() const {
  return LuaParser::RuleTableconstructor;
}


std::any LuaParser::TableconstructorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LuaVisitor*>(visitor))
    return parserVisitor->visitTableconstructor(this);
  else
    return visitor->visitChildren(this);
}

LuaParser::TableconstructorContext* LuaParser::tableconstructor() {
  TableconstructorContext *_localctx = _tracker.createInstance<TableconstructorContext>(_ctx, getState());
  enterRule(_localctx, 68, LuaParser::RuleTableconstructor);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(421);
    match(LuaParser::LB);
    setState(423);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & -48272958265163264) != 0)) {
      setState(422);
      fieldlist();
    }
    setState(425);
    match(LuaParser::RB);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FieldlistContext ------------------------------------------------------------------

LuaParser::FieldlistContext::FieldlistContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<LuaParser::FieldContext *> LuaParser::FieldlistContext::field() {
  return getRuleContexts<LuaParser::FieldContext>();
}

LuaParser::FieldContext* LuaParser::FieldlistContext::field(size_t i) {
  return getRuleContext<LuaParser::FieldContext>(i);
}

std::vector<LuaParser::FieldsepContext *> LuaParser::FieldlistContext::fieldsep() {
  return getRuleContexts<LuaParser::FieldsepContext>();
}

LuaParser::FieldsepContext* LuaParser::FieldlistContext::fieldsep(size_t i) {
  return getRuleContext<LuaParser::FieldsepContext>(i);
}


size_t LuaParser::FieldlistContext::getRuleIndex() const {
  return LuaParser::RuleFieldlist;
}


std::any LuaParser::FieldlistContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LuaVisitor*>(visitor))
    return parserVisitor->visitFieldlist(this);
  else
    return visitor->visitChildren(this);
}

LuaParser::FieldlistContext* LuaParser::fieldlist() {
  FieldlistContext *_localctx = _tracker.createInstance<FieldlistContext>(_ctx, getState());
  enterRule(_localctx, 70, LuaParser::RuleFieldlist);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(427);
    field();
    setState(433);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 38, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(428);
        fieldsep();
        setState(429);
        field(); 
      }
      setState(435);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 38, _ctx);
    }
    setState(437);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == LuaParser::SEMI

    || _la == LuaParser::COMMA) {
      setState(436);
      fieldsep();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FieldContext ------------------------------------------------------------------

LuaParser::FieldContext::FieldContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LuaParser::FieldContext::LSB() {
  return getToken(LuaParser::LSB, 0);
}

std::vector<LuaParser::ExpContext *> LuaParser::FieldContext::exp() {
  return getRuleContexts<LuaParser::ExpContext>();
}

LuaParser::ExpContext* LuaParser::FieldContext::exp(size_t i) {
  return getRuleContext<LuaParser::ExpContext>(i);
}

tree::TerminalNode* LuaParser::FieldContext::RSB() {
  return getToken(LuaParser::RSB, 0);
}

tree::TerminalNode* LuaParser::FieldContext::EQL() {
  return getToken(LuaParser::EQL, 0);
}

tree::TerminalNode* LuaParser::FieldContext::NAME() {
  return getToken(LuaParser::NAME, 0);
}


size_t LuaParser::FieldContext::getRuleIndex() const {
  return LuaParser::RuleField;
}


std::any LuaParser::FieldContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LuaVisitor*>(visitor))
    return parserVisitor->visitField(this);
  else
    return visitor->visitChildren(this);
}

LuaParser::FieldContext* LuaParser::field() {
  FieldContext *_localctx = _tracker.createInstance<FieldContext>(_ctx, getState());
  enterRule(_localctx, 72, LuaParser::RuleField);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(449);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 40, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(439);
      match(LuaParser::LSB);
      setState(440);
      exp(0);
      setState(441);
      match(LuaParser::RSB);
      setState(442);
      match(LuaParser::EQL);
      setState(443);
      exp(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(445);
      match(LuaParser::NAME);
      setState(446);
      match(LuaParser::EQL);
      setState(447);
      exp(0);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(448);
      exp(0);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FieldsepContext ------------------------------------------------------------------

LuaParser::FieldsepContext::FieldsepContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LuaParser::FieldsepContext::COMMA() {
  return getToken(LuaParser::COMMA, 0);
}

tree::TerminalNode* LuaParser::FieldsepContext::SEMI() {
  return getToken(LuaParser::SEMI, 0);
}


size_t LuaParser::FieldsepContext::getRuleIndex() const {
  return LuaParser::RuleFieldsep;
}


std::any LuaParser::FieldsepContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LuaVisitor*>(visitor))
    return parserVisitor->visitFieldsep(this);
  else
    return visitor->visitChildren(this);
}

LuaParser::FieldsepContext* LuaParser::fieldsep() {
  FieldsepContext *_localctx = _tracker.createInstance<FieldsepContext>(_ctx, getState());
  enterRule(_localctx, 74, LuaParser::RuleFieldsep);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(451);
    _la = _input->LA(1);
    if (!(_la == LuaParser::SEMI

    || _la == LuaParser::COMMA)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OperatorOrContext ------------------------------------------------------------------

LuaParser::OperatorOrContext::OperatorOrContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t LuaParser::OperatorOrContext::getRuleIndex() const {
  return LuaParser::RuleOperatorOr;
}


std::any LuaParser::OperatorOrContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LuaVisitor*>(visitor))
    return parserVisitor->visitOperatorOr(this);
  else
    return visitor->visitChildren(this);
}

LuaParser::OperatorOrContext* LuaParser::operatorOr() {
  OperatorOrContext *_localctx = _tracker.createInstance<OperatorOrContext>(_ctx, getState());
  enterRule(_localctx, 76, LuaParser::RuleOperatorOr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(453);
    match(LuaParser::T__0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OperatorAndContext ------------------------------------------------------------------

LuaParser::OperatorAndContext::OperatorAndContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t LuaParser::OperatorAndContext::getRuleIndex() const {
  return LuaParser::RuleOperatorAnd;
}


std::any LuaParser::OperatorAndContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LuaVisitor*>(visitor))
    return parserVisitor->visitOperatorAnd(this);
  else
    return visitor->visitChildren(this);
}

LuaParser::OperatorAndContext* LuaParser::operatorAnd() {
  OperatorAndContext *_localctx = _tracker.createInstance<OperatorAndContext>(_ctx, getState());
  enterRule(_localctx, 78, LuaParser::RuleOperatorAnd);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(455);
    match(LuaParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OperatorComparisonContext ------------------------------------------------------------------

LuaParser::OperatorComparisonContext::OperatorComparisonContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LuaParser::OperatorComparisonContext::LT() {
  return getToken(LuaParser::LT, 0);
}

tree::TerminalNode* LuaParser::OperatorComparisonContext::GT() {
  return getToken(LuaParser::GT, 0);
}


size_t LuaParser::OperatorComparisonContext::getRuleIndex() const {
  return LuaParser::RuleOperatorComparison;
}


std::any LuaParser::OperatorComparisonContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LuaVisitor*>(visitor))
    return parserVisitor->visitOperatorComparison(this);
  else
    return visitor->visitChildren(this);
}

LuaParser::OperatorComparisonContext* LuaParser::operatorComparison() {
  OperatorComparisonContext *_localctx = _tracker.createInstance<OperatorComparisonContext>(_ctx, getState());
  enterRule(_localctx, 80, LuaParser::RuleOperatorComparison);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(457);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 844424930132088) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OperatorStrcatContext ------------------------------------------------------------------

LuaParser::OperatorStrcatContext::OperatorStrcatContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t LuaParser::OperatorStrcatContext::getRuleIndex() const {
  return LuaParser::RuleOperatorStrcat;
}


std::any LuaParser::OperatorStrcatContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LuaVisitor*>(visitor))
    return parserVisitor->visitOperatorStrcat(this);
  else
    return visitor->visitChildren(this);
}

LuaParser::OperatorStrcatContext* LuaParser::operatorStrcat() {
  OperatorStrcatContext *_localctx = _tracker.createInstance<OperatorStrcatContext>(_ctx, getState());
  enterRule(_localctx, 82, LuaParser::RuleOperatorStrcat);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(459);
    match(LuaParser::T__6);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OperatorAddSubContext ------------------------------------------------------------------

LuaParser::OperatorAddSubContext::OperatorAddSubContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t LuaParser::OperatorAddSubContext::getRuleIndex() const {
  return LuaParser::RuleOperatorAddSub;
}


std::any LuaParser::OperatorAddSubContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LuaVisitor*>(visitor))
    return parserVisitor->visitOperatorAddSub(this);
  else
    return visitor->visitChildren(this);
}

LuaParser::OperatorAddSubContext* LuaParser::operatorAddSub() {
  OperatorAddSubContext *_localctx = _tracker.createInstance<OperatorAddSubContext>(_ctx, getState());
  enterRule(_localctx, 84, LuaParser::RuleOperatorAddSub);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(461);
    _la = _input->LA(1);
    if (!(_la == LuaParser::T__7

    || _la == LuaParser::T__8)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OperatorMulDivModContext ------------------------------------------------------------------

LuaParser::OperatorMulDivModContext::OperatorMulDivModContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t LuaParser::OperatorMulDivModContext::getRuleIndex() const {
  return LuaParser::RuleOperatorMulDivMod;
}


std::any LuaParser::OperatorMulDivModContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LuaVisitor*>(visitor))
    return parserVisitor->visitOperatorMulDivMod(this);
  else
    return visitor->visitChildren(this);
}

LuaParser::OperatorMulDivModContext* LuaParser::operatorMulDivMod() {
  OperatorMulDivModContext *_localctx = _tracker.createInstance<OperatorMulDivModContext>(_ctx, getState());
  enterRule(_localctx, 86, LuaParser::RuleOperatorMulDivMod);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(463);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 15360) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OperatorBitwiseContext ------------------------------------------------------------------

LuaParser::OperatorBitwiseContext::OperatorBitwiseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t LuaParser::OperatorBitwiseContext::getRuleIndex() const {
  return LuaParser::RuleOperatorBitwise;
}


std::any LuaParser::OperatorBitwiseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LuaVisitor*>(visitor))
    return parserVisitor->visitOperatorBitwise(this);
  else
    return visitor->visitChildren(this);
}

LuaParser::OperatorBitwiseContext* LuaParser::operatorBitwise() {
  OperatorBitwiseContext *_localctx = _tracker.createInstance<OperatorBitwiseContext>(_ctx, getState());
  enterRule(_localctx, 88, LuaParser::RuleOperatorBitwise);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(465);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 507904) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OperatorUnaryContext ------------------------------------------------------------------

LuaParser::OperatorUnaryContext::OperatorUnaryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t LuaParser::OperatorUnaryContext::getRuleIndex() const {
  return LuaParser::RuleOperatorUnary;
}


std::any LuaParser::OperatorUnaryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LuaVisitor*>(visitor))
    return parserVisitor->visitOperatorUnary(this);
  else
    return visitor->visitChildren(this);
}

LuaParser::OperatorUnaryContext* LuaParser::operatorUnary() {
  OperatorUnaryContext *_localctx = _tracker.createInstance<OperatorUnaryContext>(_ctx, getState());
  enterRule(_localctx, 90, LuaParser::RuleOperatorUnary);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(467);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1638912) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OperatorPowerContext ------------------------------------------------------------------

LuaParser::OperatorPowerContext::OperatorPowerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t LuaParser::OperatorPowerContext::getRuleIndex() const {
  return LuaParser::RuleOperatorPower;
}


std::any LuaParser::OperatorPowerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LuaVisitor*>(visitor))
    return parserVisitor->visitOperatorPower(this);
  else
    return visitor->visitChildren(this);
}

LuaParser::OperatorPowerContext* LuaParser::operatorPower() {
  OperatorPowerContext *_localctx = _tracker.createInstance<OperatorPowerContext>(_ctx, getState());
  enterRule(_localctx, 92, LuaParser::RuleOperatorPower);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(469);
    match(LuaParser::T__20);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnaryOperatorContext ------------------------------------------------------------------

LuaParser::UnaryOperatorContext::UnaryOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t LuaParser::UnaryOperatorContext::getRuleIndex() const {
  return LuaParser::RuleUnaryOperator;
}


std::any LuaParser::UnaryOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LuaVisitor*>(visitor))
    return parserVisitor->visitUnaryOperator(this);
  else
    return visitor->visitChildren(this);
}

LuaParser::UnaryOperatorContext* LuaParser::unaryOperator() {
  UnaryOperatorContext *_localctx = _tracker.createInstance<UnaryOperatorContext>(_ctx, getState());
  enterRule(_localctx, 94, LuaParser::RuleUnaryOperator);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(471);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1638912) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NumberContext ------------------------------------------------------------------

LuaParser::NumberContext::NumberContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LuaParser::NumberContext::INT() {
  return getToken(LuaParser::INT, 0);
}

tree::TerminalNode* LuaParser::NumberContext::HEX() {
  return getToken(LuaParser::HEX, 0);
}

tree::TerminalNode* LuaParser::NumberContext::FLOAT() {
  return getToken(LuaParser::FLOAT, 0);
}

tree::TerminalNode* LuaParser::NumberContext::HEX_FLOAT() {
  return getToken(LuaParser::HEX_FLOAT, 0);
}


size_t LuaParser::NumberContext::getRuleIndex() const {
  return LuaParser::RuleNumber;
}


std::any LuaParser::NumberContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LuaVisitor*>(visitor))
    return parserVisitor->visitNumber(this);
  else
    return visitor->visitChildren(this);
}

LuaParser::NumberContext* LuaParser::number() {
  NumberContext *_localctx = _tracker.createInstance<NumberContext>(_ctx, getState());
  enterRule(_localctx, 96, LuaParser::RuleNumber);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(473);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & -1152921504606846976) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StringContext ------------------------------------------------------------------

LuaParser::StringContext::StringContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* LuaParser::StringContext::NORMALSTRING() {
  return getToken(LuaParser::NORMALSTRING, 0);
}

tree::TerminalNode* LuaParser::StringContext::CHARSTRING() {
  return getToken(LuaParser::CHARSTRING, 0);
}

tree::TerminalNode* LuaParser::StringContext::LONGSTRING() {
  return getToken(LuaParser::LONGSTRING, 0);
}


size_t LuaParser::StringContext::getRuleIndex() const {
  return LuaParser::RuleString;
}


std::any LuaParser::StringContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LuaVisitor*>(visitor))
    return parserVisitor->visitString(this);
  else
    return visitor->visitChildren(this);
}

LuaParser::StringContext* LuaParser::string() {
  StringContext *_localctx = _tracker.createInstance<StringContext>(_ctx, getState());
  enterRule(_localctx, 98, LuaParser::RuleString);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(475);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1008806316530991104) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool LuaParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 23: return expSempred(antlrcpp::downCast<ExpContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool LuaParser::expSempred(ExpContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 9);
    case 1: return precpred(_ctx, 7);
    case 2: return precpred(_ctx, 6);
    case 3: return precpred(_ctx, 5);
    case 4: return precpred(_ctx, 4);
    case 5: return precpred(_ctx, 3);
    case 6: return precpred(_ctx, 2);
    case 7: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

void LuaParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  luaParserInitialize();
#else
  ::antlr4::internal::call_once(luaParserOnceFlag, luaParserInitialize);
#endif
}
