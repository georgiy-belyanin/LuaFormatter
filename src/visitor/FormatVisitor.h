#pragma once

#include "Config.h"
#include "LuaBaseVisitor.h"
#include "LuaParser.h"
#include "SourceWriter.h"
#include "log.h"

using namespace antlr4;

enum BlockType { CONTROL_BLOCK, FUNCTION_BLOCK };
enum NewLineIndent { NONE_INDENT, INC_INDENT, DEC_INDENT, INC_CONTINUATION_INDENT, DEC_CONTINUATION_INDENT };

class FormatVisitor : public LuaBaseVisitor {
   public:
    FormatVisitor(const std::vector<Token*>& tokens, const Config& config) : tokens_(tokens), config_(config) {}

    std::any visitChunk(LuaParser::ChunkContext* context) override;
    std::any visitBlock(LuaParser::BlockContext* context) override;
    std::any visitStat(LuaParser::StatContext* context) override;
    std::any visitFunctioncall(LuaParser::FunctioncallContext* context) override;
    std::any visitVarDecl(LuaParser::VarDeclContext* context) override;
    std::any visitGotoStat(LuaParser::GotoStatContext* context) override;
    std::any visitDoStat(LuaParser::DoStatContext* context) override;
    std::any visitWhileStat(LuaParser::WhileStatContext* context) override;
    std::any visitRepeatStat(LuaParser::RepeatStatContext* context) override;
    std::any visitIfStat(LuaParser::IfStatContext* context) override;
    std::any visitForStat(LuaParser::ForStatContext* context) override;
    std::any visitForInStat(LuaParser::ForInStatContext* context) override;
    std::any visitFuncStat(LuaParser::FuncStatContext* context) override;
    std::any visitLocalFuncStat(LuaParser::LocalFuncStatContext* context) override;
    std::any visitLocalVarDecl(LuaParser::LocalVarDeclContext* context) override;

    std::any visitRetstat(LuaParser::RetstatContext* context) override;
    std::any visitVarlist(LuaParser::VarlistContext* context) override;
    std::any visitNamelist(LuaParser::NamelistContext* context) override;
    std::any visitAttnamelist(LuaParser::AttnamelistContext* context) override;
    std::any visitNameattrib(LuaParser::NameattribContext* context) override;
    std::any visitExplist(LuaParser::ExplistContext* context) override;

    std::any visitExp(LuaParser::ExpContext* context) override;
    std::any visitString(LuaParser::StringContext* ctx) override;
    std::any visitPrefixexp(LuaParser::PrefixexpContext* context) override;
    std::any visitVarOrExp(LuaParser::VarOrExpContext* context) override;
    std::any visitVar(LuaParser::VarContext* context) override;
    std::any visitVarSuffix(LuaParser::VarSuffixContext* context) override;
    std::any visitNameAndArgs(LuaParser::NameAndArgsContext* context) override;
    std::any visitArgs(LuaParser::ArgsContext* context) override;

    std::any visitFunctiondef(LuaParser::FunctiondefContext* context) override;
    std::any visitFuncbody(LuaParser::FuncbodyContext* context) override;
    std::any visitParlist(LuaParser::ParlistContext* context) override;

    std::any visitTableconstructor(LuaParser::TableconstructorContext* context) override;
    std::any visitFieldlist(LuaParser::FieldlistContext* context) override;
    std::any visitField(LuaParser::FieldContext* context) override;
    std::any visitFieldsep(LuaParser::FieldsepContext* context) override;

    std::any visitChildren(tree::ParseTree* tree) override;
    std::any visitTerminal(tree::TerminalNode* node) override;

    std::pair<int, int> expInfo(LuaParser::ExpContext* ctx);

   private:
    bool chop_down_block_ = true;
    bool chop_down_table_ = true;

    std::vector<SourceWriter*> writers_;

    // stack to record column of first table field
    std::unordered_map<tree::ParseTree*, std::pair<int, int>> lengthCache_;

    // stack to record column of first table field
    std::vector<int> firstTableFieldColumn_;

    // stack to record did a chained method call has increased indent
    std::vector<bool> chainedMethodCallHasIncIndent_;

    // stack to record is a chained method call is the first call
    std::vector<bool> chainedMethodCallIsFirst_;

    // stack to record is break_after_functiondef_lp has increased indent
    std::vector<bool> breakAfterLpHasIncIndent_;

    // stack to record is break_after_functioncall_lp has break the line
    std::vector<bool> functioncallLpHasBreak_;

    int indent_ = 0;
    int indentForAlign_ = 0;
    const std::vector<Token*>& tokens_;
    const Config& config_;

    std::string formatLineComment(Token* token);

    [[maybe_unused]] bool needKeepBlockOneLine(tree::ParseTree* previousNode, LuaParser::BlockContext* ctx, BlockType blockType);
    bool isBlockEmpty(LuaParser::BlockContext* ctx);
    void visitBlockAndComment(tree::ParseTree* previousNode, LuaParser::BlockContext* ctx, BlockType blockType);
    void visitNextNameAndArgs(LuaParser::VarSuffixContext* ctx);

    void visitLinkOperator(LuaParser::ExpContext* context, antlr4::ParserRuleContext* linkOperator);

    void pushWriter();
    void pushWriterWithColumn();
    void popWriter();
    std::pair<int, int> calcASTLengthAndLines(tree::ParseTree* node, std::function<void()> func);
    bool fastTestColumnLimit(tree::ParseTree* node);
    SourceWriter& cur_writer();
    int cur_columns();

    std::string indent();
    std::string indentWithAlign();
    std::string lineBreak();
    std::string commentAfter(tree::ParseTree* a, const std::string& expect);
    std::string commentAfterNewLine(tree::ParseTree* a, NewLineIndent newLineIndent);
    void incIndent();
    void decIndent();
    void incContinuationIndent();
    void decContinuationIndent();
    void incIndentForAlign(int indent);
    void decIndentForAlign(int indent);

    // Auxiliary to visitFunctioncall and visitPrefixexp
    std::string buildFirstArgumentWs(std::vector<LuaParser::NameAndArgsContext*> v);
    void buildArguments(std::vector<LuaParser::NameAndArgsContext*> v);
};
