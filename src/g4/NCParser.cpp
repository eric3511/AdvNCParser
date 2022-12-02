
// Generated from /home/eric/project/NCParser/src/g4/NCParser.g4 by ANTLR 4.11.1


#include "NCParserListener.h"

#include "NCParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct NCParserStaticData final {
  NCParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  NCParserStaticData(const NCParserStaticData&) = delete;
  NCParserStaticData(NCParserStaticData&&) = delete;
  NCParserStaticData& operator=(const NCParserStaticData&) = delete;
  NCParserStaticData& operator=(NCParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag ncparserParserOnceFlag;
NCParserStaticData *ncparserParserStaticData = nullptr;

void ncparserParserInitialize() {
  assert(ncparserParserStaticData == nullptr);
  auto staticData = std::make_unique<NCParserStaticData>(
    std::vector<std::string>{
      "prog", "varDefinition", "literal", "expressionList", "functionCall", 
      "expression", "primary", "primitiveType"
    },
    std::vector<std::string>{
      "", "'DEF'", "'REDEF'", "'NCK'", "'CHAN'", "'BOOL'", "'CHAR'", "'INT'", 
      "'REAL'", "'IF'", "'THEN'", "'ELSE'", "'ENDIF'", "'WHILE'", "'ENDWHILE'", 
      "'B_NOT'", "'B_AND'", "'B_OR'", "'B_XOR'", "", "", "", "", "'=='", 
      "'<>'", "'AND'", "'OR'", "'NOT'", "'XOR'", "'+'", "'-'", "'*'", "'DIV'", 
      "'/'", "'MOD'", "'='", "'('", "')'", "'['", "']'", "','"
    },
    std::vector<std::string>{
      "", "DEF", "REDEF", "NCK", "CHAN", "BOOL", "CHAR", "INT", "REAL", 
      "IF", "THEN", "ELSE", "ENDIF", "WHILE", "ENDWHILE", "B_NOT", "B_AND", 
      "B_OR", "B_XOR", "LT", "GT", "LE", "GE", "EQ", "NE", "AND", "OR", 
      "NOT", "XOR", "ADD", "SUB", "MUL", "DIVP", "DIV", "MOD", "ASSIGN", 
      "LPAREN", "RPAREN", "LBRACK", "RBRACK", "COMMA", "DECIMAL", "BOOLEAN", 
      "ID", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,44,92,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,7,
  	7,7,1,0,1,0,3,0,19,8,0,1,1,1,1,1,1,4,1,24,8,1,11,1,12,1,25,1,2,1,2,1,
  	3,1,3,1,3,5,3,33,8,3,10,3,12,3,36,9,3,1,4,1,4,1,4,1,4,1,4,1,5,1,5,1,5,
  	1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,3,5,56,8,5,1,5,1,5,1,5,1,5,1,
  	5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,
  	1,5,5,5,81,8,5,10,5,12,5,84,9,5,1,6,1,6,3,6,88,8,6,1,7,1,7,1,7,0,1,10,
  	8,0,2,4,6,8,10,12,14,0,7,1,0,41,42,1,0,16,18,2,0,31,31,33,33,1,0,29,30,
  	1,0,19,24,2,0,25,26,28,28,1,0,5,8,99,0,18,1,0,0,0,2,20,1,0,0,0,4,27,1,
  	0,0,0,6,29,1,0,0,0,8,37,1,0,0,0,10,55,1,0,0,0,12,87,1,0,0,0,14,89,1,0,
  	0,0,16,19,3,2,1,0,17,19,3,10,5,0,18,16,1,0,0,0,18,17,1,0,0,0,19,1,1,0,
  	0,0,20,21,5,1,0,0,21,23,3,14,7,0,22,24,5,43,0,0,23,22,1,0,0,0,24,25,1,
  	0,0,0,25,23,1,0,0,0,25,26,1,0,0,0,26,3,1,0,0,0,27,28,7,0,0,0,28,5,1,0,
  	0,0,29,34,3,10,5,0,30,31,5,40,0,0,31,33,3,10,5,0,32,30,1,0,0,0,33,36,
  	1,0,0,0,34,32,1,0,0,0,34,35,1,0,0,0,35,7,1,0,0,0,36,34,1,0,0,0,37,38,
  	5,43,0,0,38,39,5,36,0,0,39,40,3,6,3,0,40,41,5,37,0,0,41,9,1,0,0,0,42,
  	43,6,5,-1,0,43,56,3,12,6,0,44,45,5,36,0,0,45,46,3,10,5,0,46,47,5,37,0,
  	0,47,56,1,0,0,0,48,56,3,8,4,0,49,50,5,30,0,0,50,56,3,10,5,9,51,52,5,15,
  	0,0,52,56,3,10,5,8,53,54,5,27,0,0,54,56,3,10,5,2,55,42,1,0,0,0,55,44,
  	1,0,0,0,55,48,1,0,0,0,55,49,1,0,0,0,55,51,1,0,0,0,55,53,1,0,0,0,56,82,
  	1,0,0,0,57,58,10,7,0,0,58,59,7,1,0,0,59,81,3,10,5,8,60,61,10,6,0,0,61,
  	62,7,2,0,0,62,81,3,10,5,7,63,64,10,5,0,0,64,65,7,3,0,0,65,81,3,10,5,6,
  	66,67,10,4,0,0,67,68,7,4,0,0,68,81,3,10,5,5,69,70,10,3,0,0,70,71,7,5,
  	0,0,71,81,3,10,5,4,72,73,10,1,0,0,73,74,5,35,0,0,74,81,3,10,5,1,75,76,
  	10,11,0,0,76,77,5,38,0,0,77,78,3,10,5,0,78,79,5,39,0,0,79,81,1,0,0,0,
  	80,57,1,0,0,0,80,60,1,0,0,0,80,63,1,0,0,0,80,66,1,0,0,0,80,69,1,0,0,0,
  	80,72,1,0,0,0,80,75,1,0,0,0,81,84,1,0,0,0,82,80,1,0,0,0,82,83,1,0,0,0,
  	83,11,1,0,0,0,84,82,1,0,0,0,85,88,3,4,2,0,86,88,5,43,0,0,87,85,1,0,0,
  	0,87,86,1,0,0,0,88,13,1,0,0,0,89,90,7,6,0,0,90,15,1,0,0,0,7,18,25,34,
  	55,80,82,87
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  ncparserParserStaticData = staticData.release();
}

}

NCParser::NCParser(TokenStream *input) : NCParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

NCParser::NCParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  NCParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *ncparserParserStaticData->atn, ncparserParserStaticData->decisionToDFA, ncparserParserStaticData->sharedContextCache, options);
}

NCParser::~NCParser() {
  delete _interpreter;
}

const atn::ATN& NCParser::getATN() const {
  return *ncparserParserStaticData->atn;
}

std::string NCParser::getGrammarFileName() const {
  return "NCParser.g4";
}

const std::vector<std::string>& NCParser::getRuleNames() const {
  return ncparserParserStaticData->ruleNames;
}

const dfa::Vocabulary& NCParser::getVocabulary() const {
  return ncparserParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView NCParser::getSerializedATN() const {
  return ncparserParserStaticData->serializedATN;
}


//----------------- ProgContext ------------------------------------------------------------------

NCParser::ProgContext::ProgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NCParser::VarDefinitionContext* NCParser::ProgContext::varDefinition() {
  return getRuleContext<NCParser::VarDefinitionContext>(0);
}

NCParser::ExpressionContext* NCParser::ProgContext::expression() {
  return getRuleContext<NCParser::ExpressionContext>(0);
}


size_t NCParser::ProgContext::getRuleIndex() const {
  return NCParser::RuleProg;
}

void NCParser::ProgContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProg(this);
}

void NCParser::ProgContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProg(this);
}

NCParser::ProgContext* NCParser::prog() {
  ProgContext *_localctx = _tracker.createInstance<ProgContext>(_ctx, getState());
  enterRule(_localctx, 0, NCParser::RuleProg);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(18);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case NCParser::DEF: {
        enterOuterAlt(_localctx, 1);
        setState(16);
        varDefinition();
        break;
      }

      case NCParser::B_NOT:
      case NCParser::NOT:
      case NCParser::SUB:
      case NCParser::LPAREN:
      case NCParser::DECIMAL:
      case NCParser::BOOLEAN:
      case NCParser::ID: {
        enterOuterAlt(_localctx, 2);
        setState(17);
        expression(0);
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

//----------------- VarDefinitionContext ------------------------------------------------------------------

NCParser::VarDefinitionContext::VarDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* NCParser::VarDefinitionContext::DEF() {
  return getToken(NCParser::DEF, 0);
}

NCParser::PrimitiveTypeContext* NCParser::VarDefinitionContext::primitiveType() {
  return getRuleContext<NCParser::PrimitiveTypeContext>(0);
}

std::vector<tree::TerminalNode *> NCParser::VarDefinitionContext::ID() {
  return getTokens(NCParser::ID);
}

tree::TerminalNode* NCParser::VarDefinitionContext::ID(size_t i) {
  return getToken(NCParser::ID, i);
}


size_t NCParser::VarDefinitionContext::getRuleIndex() const {
  return NCParser::RuleVarDefinition;
}

void NCParser::VarDefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVarDefinition(this);
}

void NCParser::VarDefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVarDefinition(this);
}

NCParser::VarDefinitionContext* NCParser::varDefinition() {
  VarDefinitionContext *_localctx = _tracker.createInstance<VarDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 2, NCParser::RuleVarDefinition);
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
    setState(20);
    match(NCParser::DEF);
    setState(21);
    primitiveType();
    setState(23); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(22);
      match(NCParser::ID);
      setState(25); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == NCParser::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LiteralContext ------------------------------------------------------------------

NCParser::LiteralContext::LiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* NCParser::LiteralContext::DECIMAL() {
  return getToken(NCParser::DECIMAL, 0);
}

tree::TerminalNode* NCParser::LiteralContext::BOOLEAN() {
  return getToken(NCParser::BOOLEAN, 0);
}


size_t NCParser::LiteralContext::getRuleIndex() const {
  return NCParser::RuleLiteral;
}

void NCParser::LiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLiteral(this);
}

void NCParser::LiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLiteral(this);
}

NCParser::LiteralContext* NCParser::literal() {
  LiteralContext *_localctx = _tracker.createInstance<LiteralContext>(_ctx, getState());
  enterRule(_localctx, 4, NCParser::RuleLiteral);
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
    setState(27);
    _la = _input->LA(1);
    if (!(_la == NCParser::DECIMAL

    || _la == NCParser::BOOLEAN)) {
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

//----------------- ExpressionListContext ------------------------------------------------------------------

NCParser::ExpressionListContext::ExpressionListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<NCParser::ExpressionContext *> NCParser::ExpressionListContext::expression() {
  return getRuleContexts<NCParser::ExpressionContext>();
}

NCParser::ExpressionContext* NCParser::ExpressionListContext::expression(size_t i) {
  return getRuleContext<NCParser::ExpressionContext>(i);
}

std::vector<tree::TerminalNode *> NCParser::ExpressionListContext::COMMA() {
  return getTokens(NCParser::COMMA);
}

tree::TerminalNode* NCParser::ExpressionListContext::COMMA(size_t i) {
  return getToken(NCParser::COMMA, i);
}


size_t NCParser::ExpressionListContext::getRuleIndex() const {
  return NCParser::RuleExpressionList;
}

void NCParser::ExpressionListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpressionList(this);
}

void NCParser::ExpressionListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpressionList(this);
}

NCParser::ExpressionListContext* NCParser::expressionList() {
  ExpressionListContext *_localctx = _tracker.createInstance<ExpressionListContext>(_ctx, getState());
  enterRule(_localctx, 6, NCParser::RuleExpressionList);
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
    setState(29);
    expression(0);
    setState(34);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == NCParser::COMMA) {
      setState(30);
      match(NCParser::COMMA);
      setState(31);
      expression(0);
      setState(36);
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

//----------------- FunctionCallContext ------------------------------------------------------------------

NCParser::FunctionCallContext::FunctionCallContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* NCParser::FunctionCallContext::ID() {
  return getToken(NCParser::ID, 0);
}

tree::TerminalNode* NCParser::FunctionCallContext::LPAREN() {
  return getToken(NCParser::LPAREN, 0);
}

NCParser::ExpressionListContext* NCParser::FunctionCallContext::expressionList() {
  return getRuleContext<NCParser::ExpressionListContext>(0);
}

tree::TerminalNode* NCParser::FunctionCallContext::RPAREN() {
  return getToken(NCParser::RPAREN, 0);
}


size_t NCParser::FunctionCallContext::getRuleIndex() const {
  return NCParser::RuleFunctionCall;
}

void NCParser::FunctionCallContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionCall(this);
}

void NCParser::FunctionCallContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionCall(this);
}

NCParser::FunctionCallContext* NCParser::functionCall() {
  FunctionCallContext *_localctx = _tracker.createInstance<FunctionCallContext>(_ctx, getState());
  enterRule(_localctx, 8, NCParser::RuleFunctionCall);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(37);
    match(NCParser::ID);
    setState(38);
    match(NCParser::LPAREN);
    setState(39);
    expressionList();
    setState(40);
    match(NCParser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

NCParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NCParser::PrimaryContext* NCParser::ExpressionContext::primary() {
  return getRuleContext<NCParser::PrimaryContext>(0);
}

tree::TerminalNode* NCParser::ExpressionContext::LPAREN() {
  return getToken(NCParser::LPAREN, 0);
}

std::vector<NCParser::ExpressionContext *> NCParser::ExpressionContext::expression() {
  return getRuleContexts<NCParser::ExpressionContext>();
}

NCParser::ExpressionContext* NCParser::ExpressionContext::expression(size_t i) {
  return getRuleContext<NCParser::ExpressionContext>(i);
}

tree::TerminalNode* NCParser::ExpressionContext::RPAREN() {
  return getToken(NCParser::RPAREN, 0);
}

NCParser::FunctionCallContext* NCParser::ExpressionContext::functionCall() {
  return getRuleContext<NCParser::FunctionCallContext>(0);
}

tree::TerminalNode* NCParser::ExpressionContext::SUB() {
  return getToken(NCParser::SUB, 0);
}

tree::TerminalNode* NCParser::ExpressionContext::B_NOT() {
  return getToken(NCParser::B_NOT, 0);
}

tree::TerminalNode* NCParser::ExpressionContext::NOT() {
  return getToken(NCParser::NOT, 0);
}

tree::TerminalNode* NCParser::ExpressionContext::B_AND() {
  return getToken(NCParser::B_AND, 0);
}

tree::TerminalNode* NCParser::ExpressionContext::B_OR() {
  return getToken(NCParser::B_OR, 0);
}

tree::TerminalNode* NCParser::ExpressionContext::B_XOR() {
  return getToken(NCParser::B_XOR, 0);
}

tree::TerminalNode* NCParser::ExpressionContext::MUL() {
  return getToken(NCParser::MUL, 0);
}

tree::TerminalNode* NCParser::ExpressionContext::DIV() {
  return getToken(NCParser::DIV, 0);
}

tree::TerminalNode* NCParser::ExpressionContext::ADD() {
  return getToken(NCParser::ADD, 0);
}

tree::TerminalNode* NCParser::ExpressionContext::GT() {
  return getToken(NCParser::GT, 0);
}

tree::TerminalNode* NCParser::ExpressionContext::GE() {
  return getToken(NCParser::GE, 0);
}

tree::TerminalNode* NCParser::ExpressionContext::LT() {
  return getToken(NCParser::LT, 0);
}

tree::TerminalNode* NCParser::ExpressionContext::LE() {
  return getToken(NCParser::LE, 0);
}

tree::TerminalNode* NCParser::ExpressionContext::EQ() {
  return getToken(NCParser::EQ, 0);
}

tree::TerminalNode* NCParser::ExpressionContext::NE() {
  return getToken(NCParser::NE, 0);
}

tree::TerminalNode* NCParser::ExpressionContext::AND() {
  return getToken(NCParser::AND, 0);
}

tree::TerminalNode* NCParser::ExpressionContext::OR() {
  return getToken(NCParser::OR, 0);
}

tree::TerminalNode* NCParser::ExpressionContext::XOR() {
  return getToken(NCParser::XOR, 0);
}

tree::TerminalNode* NCParser::ExpressionContext::ASSIGN() {
  return getToken(NCParser::ASSIGN, 0);
}

tree::TerminalNode* NCParser::ExpressionContext::LBRACK() {
  return getToken(NCParser::LBRACK, 0);
}

tree::TerminalNode* NCParser::ExpressionContext::RBRACK() {
  return getToken(NCParser::RBRACK, 0);
}


size_t NCParser::ExpressionContext::getRuleIndex() const {
  return NCParser::RuleExpression;
}

void NCParser::ExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpression(this);
}

void NCParser::ExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpression(this);
}


NCParser::ExpressionContext* NCParser::expression() {
   return expression(0);
}

NCParser::ExpressionContext* NCParser::expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  NCParser::ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, parentState);
  NCParser::ExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 10;
  enterRecursionRule(_localctx, 10, NCParser::RuleExpression, precedence);

    size_t _la = 0;

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
    setState(55);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      setState(43);
      primary();
      break;
    }

    case 2: {
      setState(44);
      match(NCParser::LPAREN);
      setState(45);
      expression(0);
      setState(46);
      match(NCParser::RPAREN);
      break;
    }

    case 3: {
      setState(48);
      functionCall();
      break;
    }

    case 4: {
      setState(49);
      match(NCParser::SUB);
      setState(50);
      expression(9);
      break;
    }

    case 5: {
      setState(51);
      match(NCParser::B_NOT);
      setState(52);
      expression(8);
      break;
    }

    case 6: {
      setState(53);
      match(NCParser::NOT);
      setState(54);
      expression(2);
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(82);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(80);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(57);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(58);
          _la = _input->LA(1);
          if (!(((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & 458752) != 0)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(59);
          expression(8);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(60);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(61);
          _la = _input->LA(1);
          if (!(_la == NCParser::MUL

          || _la == NCParser::DIV)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(62);
          expression(7);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(63);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(64);
          _la = _input->LA(1);
          if (!(_la == NCParser::ADD

          || _la == NCParser::SUB)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(65);
          expression(6);
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(66);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(67);
          _la = _input->LA(1);
          if (!(((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & 33030144) != 0)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(68);
          expression(5);
          break;
        }

        case 5: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(69);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(70);
          _la = _input->LA(1);
          if (!(((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & 369098752) != 0)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(71);
          expression(4);
          break;
        }

        case 6: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(72);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(73);
          match(NCParser::ASSIGN);
          setState(74);
          expression(1);
          break;
        }

        case 7: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(75);

          if (!(precpred(_ctx, 11))) throw FailedPredicateException(this, "precpred(_ctx, 11)");
          setState(76);
          match(NCParser::LBRACK);
          setState(77);
          expression(0);
          setState(78);
          match(NCParser::RBRACK);
          break;
        }

        default:
          break;
        } 
      }
      setState(84);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- PrimaryContext ------------------------------------------------------------------

NCParser::PrimaryContext::PrimaryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NCParser::LiteralContext* NCParser::PrimaryContext::literal() {
  return getRuleContext<NCParser::LiteralContext>(0);
}

tree::TerminalNode* NCParser::PrimaryContext::ID() {
  return getToken(NCParser::ID, 0);
}


size_t NCParser::PrimaryContext::getRuleIndex() const {
  return NCParser::RulePrimary;
}

void NCParser::PrimaryContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrimary(this);
}

void NCParser::PrimaryContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrimary(this);
}

NCParser::PrimaryContext* NCParser::primary() {
  PrimaryContext *_localctx = _tracker.createInstance<PrimaryContext>(_ctx, getState());
  enterRule(_localctx, 12, NCParser::RulePrimary);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(87);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case NCParser::DECIMAL:
      case NCParser::BOOLEAN: {
        enterOuterAlt(_localctx, 1);
        setState(85);
        literal();
        break;
      }

      case NCParser::ID: {
        enterOuterAlt(_localctx, 2);
        setState(86);
        match(NCParser::ID);
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

//----------------- PrimitiveTypeContext ------------------------------------------------------------------

NCParser::PrimitiveTypeContext::PrimitiveTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* NCParser::PrimitiveTypeContext::BOOL() {
  return getToken(NCParser::BOOL, 0);
}

tree::TerminalNode* NCParser::PrimitiveTypeContext::CHAR() {
  return getToken(NCParser::CHAR, 0);
}

tree::TerminalNode* NCParser::PrimitiveTypeContext::INT() {
  return getToken(NCParser::INT, 0);
}

tree::TerminalNode* NCParser::PrimitiveTypeContext::REAL() {
  return getToken(NCParser::REAL, 0);
}


size_t NCParser::PrimitiveTypeContext::getRuleIndex() const {
  return NCParser::RulePrimitiveType;
}

void NCParser::PrimitiveTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrimitiveType(this);
}

void NCParser::PrimitiveTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<NCParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrimitiveType(this);
}

NCParser::PrimitiveTypeContext* NCParser::primitiveType() {
  PrimitiveTypeContext *_localctx = _tracker.createInstance<PrimitiveTypeContext>(_ctx, getState());
  enterRule(_localctx, 14, NCParser::RulePrimitiveType);
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
    setState(89);
    _la = _input->LA(1);
    if (!(((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 480) != 0)) {
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

bool NCParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 5: return expressionSempred(antlrcpp::downCast<ExpressionContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool NCParser::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 7);
    case 1: return precpred(_ctx, 6);
    case 2: return precpred(_ctx, 5);
    case 3: return precpred(_ctx, 4);
    case 4: return precpred(_ctx, 3);
    case 5: return precpred(_ctx, 1);
    case 6: return precpred(_ctx, 11);

  default:
    break;
  }
  return true;
}

void NCParser::initialize() {
  ::antlr4::internal::call_once(ncparserParserOnceFlag, ncparserParserInitialize);
}
