
// Generated from /home/eric/project/NCParser/src/g4/NCParser.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"
#include "NCParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by NCParser.
 */
class  NCParserListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterVarDefinition(NCParser::VarDefinitionContext *ctx) = 0;
  virtual void exitVarDefinition(NCParser::VarDefinitionContext *ctx) = 0;

  virtual void enterLiteral(NCParser::LiteralContext *ctx) = 0;
  virtual void exitLiteral(NCParser::LiteralContext *ctx) = 0;

  virtual void enterExpression(NCParser::ExpressionContext *ctx) = 0;
  virtual void exitExpression(NCParser::ExpressionContext *ctx) = 0;

  virtual void enterPrimary(NCParser::PrimaryContext *ctx) = 0;
  virtual void exitPrimary(NCParser::PrimaryContext *ctx) = 0;

  virtual void enterPrimitiveType(NCParser::PrimitiveTypeContext *ctx) = 0;
  virtual void exitPrimitiveType(NCParser::PrimitiveTypeContext *ctx) = 0;


};

