
// Generated from Lua.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  LuaParser : public antlr4::Parser {
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

  enum {
    RuleChunk = 0, RuleBlock = 1, RuleStat = 2, RuleVarDecl = 3, RuleFunctioncall = 4, 
    RuleGotoStat = 5, RuleDoStat = 6, RuleWhileStat = 7, RuleRepeatStat = 8, 
    RuleIfStat = 9, RuleForStat = 10, RuleForInStat = 11, RuleFuncStat = 12, 
    RuleLocalFuncStat = 13, RuleLocalVarDecl = 14, RuleRetstat = 15, RuleLabel = 16, 
    RuleFuncname = 17, RuleVarlist = 18, RuleNamelist = 19, RuleAttnamelist = 20, 
    RuleNameattrib = 21, RuleExplist = 22, RuleExp = 23, RuleLongString = 24, 
    RulePrefixexp = 25, RuleVarOrExp = 26, RuleVar = 27, RuleVarSuffix = 28, 
    RuleNameAndArgs = 29, RuleArgs = 30, RuleFunctiondef = 31, RuleFuncbody = 32, 
    RuleParlist = 33, RuleTableconstructor = 34, RuleFieldlist = 35, RuleField = 36, 
    RuleFieldsep = 37, RuleOperatorOr = 38, RuleOperatorAnd = 39, RuleOperatorComparison = 40, 
    RuleOperatorStrcat = 41, RuleOperatorAddSub = 42, RuleOperatorMulDivMod = 43, 
    RuleOperatorBitwise = 44, RuleOperatorUnary = 45, RuleOperatorPower = 46, 
    RuleUnaryOperator = 47, RuleNumber = 48, RuleString = 49
  };

  explicit LuaParser(antlr4::TokenStream *input);

  LuaParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~LuaParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class ChunkContext;
  class BlockContext;
  class StatContext;
  class VarDeclContext;
  class FunctioncallContext;
  class GotoStatContext;
  class DoStatContext;
  class WhileStatContext;
  class RepeatStatContext;
  class IfStatContext;
  class ForStatContext;
  class ForInStatContext;
  class FuncStatContext;
  class LocalFuncStatContext;
  class LocalVarDeclContext;
  class RetstatContext;
  class LabelContext;
  class FuncnameContext;
  class VarlistContext;
  class NamelistContext;
  class AttnamelistContext;
  class NameattribContext;
  class ExplistContext;
  class ExpContext;
  class LongStringContext;
  class PrefixexpContext;
  class VarOrExpContext;
  class VarContext;
  class VarSuffixContext;
  class NameAndArgsContext;
  class ArgsContext;
  class FunctiondefContext;
  class FuncbodyContext;
  class ParlistContext;
  class TableconstructorContext;
  class FieldlistContext;
  class FieldContext;
  class FieldsepContext;
  class OperatorOrContext;
  class OperatorAndContext;
  class OperatorComparisonContext;
  class OperatorStrcatContext;
  class OperatorAddSubContext;
  class OperatorMulDivModContext;
  class OperatorBitwiseContext;
  class OperatorUnaryContext;
  class OperatorPowerContext;
  class UnaryOperatorContext;
  class NumberContext;
  class StringContext; 

  class  ChunkContext : public antlr4::ParserRuleContext {
  public:
    ChunkContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BlockContext *block();
    antlr4::tree::TerminalNode *EOF();
    antlr4::tree::TerminalNode *SHEBANG();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ChunkContext* chunk();

  class  BlockContext : public antlr4::ParserRuleContext {
  public:
    BlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<StatContext *> stat();
    StatContext* stat(size_t i);
    RetstatContext *retstat();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BlockContext* block();

  class  StatContext : public antlr4::ParserRuleContext {
  public:
    StatContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SEMI();
    VarDeclContext *varDecl();
    FunctioncallContext *functioncall();
    LabelContext *label();
    antlr4::tree::TerminalNode *BREAK();
    GotoStatContext *gotoStat();
    DoStatContext *doStat();
    WhileStatContext *whileStat();
    RepeatStatContext *repeatStat();
    IfStatContext *ifStat();
    ForStatContext *forStat();
    ForInStatContext *forInStat();
    FuncStatContext *funcStat();
    LocalFuncStatContext *localFuncStat();
    LocalVarDeclContext *localVarDecl();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatContext* stat();

  class  VarDeclContext : public antlr4::ParserRuleContext {
  public:
    VarDeclContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VarlistContext *varlist();
    antlr4::tree::TerminalNode *EQL();
    ExplistContext *explist();
    antlr4::tree::TerminalNode *SEMI();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VarDeclContext* varDecl();

  class  FunctioncallContext : public antlr4::ParserRuleContext {
  public:
    FunctioncallContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VarOrExpContext *varOrExp();
    std::vector<NameAndArgsContext *> nameAndArgs();
    NameAndArgsContext* nameAndArgs(size_t i);
    antlr4::tree::TerminalNode *SEMI();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctioncallContext* functioncall();

  class  GotoStatContext : public antlr4::ParserRuleContext {
  public:
    GotoStatContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GOTO();
    antlr4::tree::TerminalNode *NAME();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GotoStatContext* gotoStat();

  class  DoStatContext : public antlr4::ParserRuleContext {
  public:
    DoStatContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DO();
    BlockContext *block();
    antlr4::tree::TerminalNode *END();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DoStatContext* doStat();

  class  WhileStatContext : public antlr4::ParserRuleContext {
  public:
    WhileStatContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHILE();
    ExpContext *exp();
    antlr4::tree::TerminalNode *DO();
    BlockContext *block();
    antlr4::tree::TerminalNode *END();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WhileStatContext* whileStat();

  class  RepeatStatContext : public antlr4::ParserRuleContext {
  public:
    RepeatStatContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REPEAT();
    BlockContext *block();
    antlr4::tree::TerminalNode *UNTIL();
    ExpContext *exp();
    antlr4::tree::TerminalNode *SEMI();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RepeatStatContext* repeatStat();

  class  IfStatContext : public antlr4::ParserRuleContext {
  public:
    IfStatContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IF();
    std::vector<ExpContext *> exp();
    ExpContext* exp(size_t i);
    std::vector<antlr4::tree::TerminalNode *> THEN();
    antlr4::tree::TerminalNode* THEN(size_t i);
    std::vector<BlockContext *> block();
    BlockContext* block(size_t i);
    antlr4::tree::TerminalNode *END();
    std::vector<antlr4::tree::TerminalNode *> ELSEIF();
    antlr4::tree::TerminalNode* ELSEIF(size_t i);
    antlr4::tree::TerminalNode *ELSE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IfStatContext* ifStat();

  class  ForStatContext : public antlr4::ParserRuleContext {
  public:
    ForStatContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *NAME();
    antlr4::tree::TerminalNode *EQL();
    std::vector<ExpContext *> exp();
    ExpContext* exp(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *DO();
    BlockContext *block();
    antlr4::tree::TerminalNode *END();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ForStatContext* forStat();

  class  ForInStatContext : public antlr4::ParserRuleContext {
  public:
    ForInStatContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FOR();
    NamelistContext *namelist();
    antlr4::tree::TerminalNode *IN();
    ExplistContext *explist();
    antlr4::tree::TerminalNode *DO();
    BlockContext *block();
    antlr4::tree::TerminalNode *END();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ForInStatContext* forInStat();

  class  FuncStatContext : public antlr4::ParserRuleContext {
  public:
    FuncStatContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FUNCTION();
    FuncnameContext *funcname();
    FuncbodyContext *funcbody();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FuncStatContext* funcStat();

  class  LocalFuncStatContext : public antlr4::ParserRuleContext {
  public:
    LocalFuncStatContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LOCAL();
    antlr4::tree::TerminalNode *FUNCTION();
    antlr4::tree::TerminalNode *NAME();
    FuncbodyContext *funcbody();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LocalFuncStatContext* localFuncStat();

  class  LocalVarDeclContext : public antlr4::ParserRuleContext {
  public:
    LocalVarDeclContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LOCAL();
    AttnamelistContext *attnamelist();
    antlr4::tree::TerminalNode *EQL();
    ExplistContext *explist();
    antlr4::tree::TerminalNode *SEMI();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LocalVarDeclContext* localVarDecl();

  class  RetstatContext : public antlr4::ParserRuleContext {
  public:
    RetstatContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RETURN();
    ExplistContext *explist();
    antlr4::tree::TerminalNode *SEMI();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RetstatContext* retstat();

  class  LabelContext : public antlr4::ParserRuleContext {
  public:
    LabelContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> DCOLON();
    antlr4::tree::TerminalNode* DCOLON(size_t i);
    antlr4::tree::TerminalNode *NAME();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LabelContext* label();

  class  FuncnameContext : public antlr4::ParserRuleContext {
  public:
    FuncnameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> NAME();
    antlr4::tree::TerminalNode* NAME(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);
    antlr4::tree::TerminalNode *COLON();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FuncnameContext* funcname();

  class  VarlistContext : public antlr4::ParserRuleContext {
  public:
    VarlistContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<VarContext *> var();
    VarContext* var(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VarlistContext* varlist();

  class  NamelistContext : public antlr4::ParserRuleContext {
  public:
    NamelistContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> NAME();
    antlr4::tree::TerminalNode* NAME(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NamelistContext* namelist();

  class  AttnamelistContext : public antlr4::ParserRuleContext {
  public:
    AttnamelistContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<NameattribContext *> nameattrib();
    NameattribContext* nameattrib(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AttnamelistContext* attnamelist();

  class  NameattribContext : public antlr4::ParserRuleContext {
  public:
    NameattribContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> NAME();
    antlr4::tree::TerminalNode* NAME(size_t i);
    antlr4::tree::TerminalNode *LT();
    antlr4::tree::TerminalNode *GT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NameattribContext* nameattrib();

  class  ExplistContext : public antlr4::ParserRuleContext {
  public:
    ExplistContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpContext *> exp();
    ExpContext* exp(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExplistContext* explist();

  class  ExpContext : public antlr4::ParserRuleContext {
  public:
    ExpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NIL();
    antlr4::tree::TerminalNode *FALSE();
    antlr4::tree::TerminalNode *TRUE();
    NumberContext *number();
    StringContext *string();
    antlr4::tree::TerminalNode *ELLIPSIS();
    PrefixexpContext *prefixexp();
    FunctiondefContext *functiondef();
    TableconstructorContext *tableconstructor();
    LongStringContext *longString();
    UnaryOperatorContext *unaryOperator();
    std::vector<ExpContext *> exp();
    ExpContext* exp(size_t i);
    OperatorPowerContext *operatorPower();
    OperatorMulDivModContext *operatorMulDivMod();
    OperatorAddSubContext *operatorAddSub();
    OperatorStrcatContext *operatorStrcat();
    OperatorComparisonContext *operatorComparison();
    OperatorAndContext *operatorAnd();
    OperatorOrContext *operatorOr();
    OperatorBitwiseContext *operatorBitwise();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpContext* exp();
  ExpContext* exp(int precedence);
  class  LongStringContext : public antlr4::ParserRuleContext {
  public:
    LongStringContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<StringContext *> string();
    StringContext* string(size_t i);
    OperatorStrcatContext *operatorStrcat();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LongStringContext* longString();

  class  PrefixexpContext : public antlr4::ParserRuleContext {
  public:
    PrefixexpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VarOrExpContext *varOrExp();
    std::vector<NameAndArgsContext *> nameAndArgs();
    NameAndArgsContext* nameAndArgs(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrefixexpContext* prefixexp();

  class  VarOrExpContext : public antlr4::ParserRuleContext {
  public:
    VarOrExpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VarContext *var();
    antlr4::tree::TerminalNode *LP();
    ExpContext *exp();
    antlr4::tree::TerminalNode *RP();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VarOrExpContext* varOrExp();

  class  VarContext : public antlr4::ParserRuleContext {
  public:
    VarContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NAME();
    antlr4::tree::TerminalNode *LP();
    ExpContext *exp();
    antlr4::tree::TerminalNode *RP();
    std::vector<VarSuffixContext *> varSuffix();
    VarSuffixContext* varSuffix(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VarContext* var();

  class  VarSuffixContext : public antlr4::ParserRuleContext {
  public:
    VarSuffixContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LSB();
    ExpContext *exp();
    antlr4::tree::TerminalNode *RSB();
    antlr4::tree::TerminalNode *DOT();
    antlr4::tree::TerminalNode *NAME();
    std::vector<NameAndArgsContext *> nameAndArgs();
    NameAndArgsContext* nameAndArgs(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VarSuffixContext* varSuffix();

  class  NameAndArgsContext : public antlr4::ParserRuleContext {
  public:
    NameAndArgsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ArgsContext *args();
    antlr4::tree::TerminalNode *COLON();
    antlr4::tree::TerminalNode *NAME();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NameAndArgsContext* nameAndArgs();

  class  ArgsContext : public antlr4::ParserRuleContext {
  public:
    ArgsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LP();
    antlr4::tree::TerminalNode *RP();
    ExplistContext *explist();
    TableconstructorContext *tableconstructor();
    StringContext *string();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ArgsContext* args();

  class  FunctiondefContext : public antlr4::ParserRuleContext {
  public:
    FunctiondefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FUNCTION();
    FuncbodyContext *funcbody();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctiondefContext* functiondef();

  class  FuncbodyContext : public antlr4::ParserRuleContext {
  public:
    FuncbodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LP();
    antlr4::tree::TerminalNode *RP();
    BlockContext *block();
    antlr4::tree::TerminalNode *END();
    ParlistContext *parlist();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FuncbodyContext* funcbody();

  class  ParlistContext : public antlr4::ParserRuleContext {
  public:
    ParlistContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NamelistContext *namelist();
    antlr4::tree::TerminalNode *COMMA();
    antlr4::tree::TerminalNode *ELLIPSIS();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParlistContext* parlist();

  class  TableconstructorContext : public antlr4::ParserRuleContext {
  public:
    TableconstructorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LB();
    antlr4::tree::TerminalNode *RB();
    FieldlistContext *fieldlist();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TableconstructorContext* tableconstructor();

  class  FieldlistContext : public antlr4::ParserRuleContext {
  public:
    FieldlistContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<FieldContext *> field();
    FieldContext* field(size_t i);
    std::vector<FieldsepContext *> fieldsep();
    FieldsepContext* fieldsep(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FieldlistContext* fieldlist();

  class  FieldContext : public antlr4::ParserRuleContext {
  public:
    FieldContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LSB();
    std::vector<ExpContext *> exp();
    ExpContext* exp(size_t i);
    antlr4::tree::TerminalNode *RSB();
    antlr4::tree::TerminalNode *EQL();
    antlr4::tree::TerminalNode *NAME();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FieldContext* field();

  class  FieldsepContext : public antlr4::ParserRuleContext {
  public:
    FieldsepContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COMMA();
    antlr4::tree::TerminalNode *SEMI();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FieldsepContext* fieldsep();

  class  OperatorOrContext : public antlr4::ParserRuleContext {
  public:
    OperatorOrContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OperatorOrContext* operatorOr();

  class  OperatorAndContext : public antlr4::ParserRuleContext {
  public:
    OperatorAndContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OperatorAndContext* operatorAnd();

  class  OperatorComparisonContext : public antlr4::ParserRuleContext {
  public:
    OperatorComparisonContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LT();
    antlr4::tree::TerminalNode *GT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OperatorComparisonContext* operatorComparison();

  class  OperatorStrcatContext : public antlr4::ParserRuleContext {
  public:
    OperatorStrcatContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OperatorStrcatContext* operatorStrcat();

  class  OperatorAddSubContext : public antlr4::ParserRuleContext {
  public:
    OperatorAddSubContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OperatorAddSubContext* operatorAddSub();

  class  OperatorMulDivModContext : public antlr4::ParserRuleContext {
  public:
    OperatorMulDivModContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OperatorMulDivModContext* operatorMulDivMod();

  class  OperatorBitwiseContext : public antlr4::ParserRuleContext {
  public:
    OperatorBitwiseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OperatorBitwiseContext* operatorBitwise();

  class  OperatorUnaryContext : public antlr4::ParserRuleContext {
  public:
    OperatorUnaryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OperatorUnaryContext* operatorUnary();

  class  OperatorPowerContext : public antlr4::ParserRuleContext {
  public:
    OperatorPowerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OperatorPowerContext* operatorPower();

  class  UnaryOperatorContext : public antlr4::ParserRuleContext {
  public:
    UnaryOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UnaryOperatorContext* unaryOperator();

  class  NumberContext : public antlr4::ParserRuleContext {
  public:
    NumberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INT();
    antlr4::tree::TerminalNode *HEX();
    antlr4::tree::TerminalNode *FLOAT();
    antlr4::tree::TerminalNode *HEX_FLOAT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NumberContext* number();

  class  StringContext : public antlr4::ParserRuleContext {
  public:
    StringContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NORMALSTRING();
    antlr4::tree::TerminalNode *CHARSTRING();
    antlr4::tree::TerminalNode *LONGSTRING();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StringContext* string();


  bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

  bool expSempred(ExpContext *_localctx, size_t predicateIndex);

  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

