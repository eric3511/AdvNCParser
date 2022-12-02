
// Generated from /home/eric/project/NCParser/src/g4/NCParser.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"
#include "NCParserListener.h"


/**
 * This class provides an empty implementation of NCParserListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  NCParserBaseListener : public NCParserListener {
public:

  virtual void enterProg(NCParser::ProgContext * /*ctx*/) override { }
  virtual void exitProg(NCParser::ProgContext * /*ctx*/) override { }

  virtual void enterVarDefinition(NCParser::VarDefinitionContext * /*ctx*/) override { }
  virtual void exitVarDefinition(NCParser::VarDefinitionContext * /*ctx*/) override { }

  virtual void enterLiteral(NCParser::LiteralContext * /*ctx*/) override { }
  virtual void exitLiteral(NCParser::LiteralContext * /*ctx*/) override { }

  virtual void enterExpressionList(NCParser::ExpressionListContext * /*ctx*/) override { }
  virtual void exitExpressionList(NCParser::ExpressionListContext * /*ctx*/) override { }

  virtual void enterFunctionCall(NCParser::FunctionCallContext * /*ctx*/) override { }
  virtual void exitFunctionCall(NCParser::FunctionCallContext * /*ctx*/) override { }

  virtual void enterExpression(NCParser::ExpressionContext * /*ctx*/) override { }
  virtual void exitExpression(NCParser::ExpressionContext * /*ctx*/) override { }

  virtual void enterPrimary(NCParser::PrimaryContext * /*ctx*/) override { }
  virtual void exitPrimary(NCParser::PrimaryContext * /*ctx*/) override { }

  virtual void enterPrimitiveType(NCParser::PrimitiveTypeContext * /*ctx*/) override { }
  virtual void exitPrimitiveType(NCParser::PrimitiveTypeContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

