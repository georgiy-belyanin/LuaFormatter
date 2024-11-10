
// Generated from Lua.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  LuaLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, T__12 = 13, T__13 = 14, 
    T__14 = 15, T__15 = 16, T__16 = 17, T__17 = 18, T__18 = 19, T__19 = 20, 
    T__20 = 21, FUNCTION = 22, RETURN = 23, LOCAL = 24, TRUE = 25, FALSE = 26, 
    NIL = 27, BREAK = 28, DO = 29, END = 30, GOTO = 31, WHILE = 32, REPEAT = 33, 
    UNTIL = 34, FOR = 35, IF = 36, THEN = 37, ELSE = 38, ELSEIF = 39, IN = 40, 
    SEMI = 41, COMMA = 42, DOT = 43, EQL = 44, COLON = 45, DCOLON = 46, 
    ELLIPSIS = 47, LT = 48, GT = 49, LP = 50, RP = 51, LB = 52, RB = 53, 
    LSB = 54, RSB = 55, NAME = 56, NORMALSTRING = 57, CHARSTRING = 58, LONGSTRING = 59, 
    INT = 60, HEX = 61, FLOAT = 62, HEX_FLOAT = 63, COMMENT = 64, LINE_COMMENT = 65, 
    WS = 66, SHEBANG = 67
  };

  explicit LuaLexer(antlr4::CharStream *input);

  ~LuaLexer() override;


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

};

