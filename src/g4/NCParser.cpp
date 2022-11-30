
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
      "varDefinition", "literal", "expression", "primary", "primitiveType"
    },
    std::vector<std::string>{
      "", "'DEF'", "'INT'", "'REAL'", "'BOOL'", "'<'", "'>'", "'='", "'AND'", 
      "'OR'", "'+'", "'-'", "'*'", "'/'", "'('", "')'", "'['", "']'"
    },
    std::vector<std::string>{
      "", "Def", "Int", "Real", "Bool", "LessThan", "GreaterThan", "Equal", 
      "And", "Or", "Plus", "Minus", "Star", "Div", "LParen", "RParen", "LBrack", 
      "RBrack", "DecimalLiteral", "BoolLiteral", "ID"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,20,43,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,1,0,1,0,1,0,4,0,14,
  	8,0,11,0,12,0,15,1,1,1,1,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,
  	1,2,5,2,32,8,2,10,2,12,2,35,9,2,1,3,1,3,3,3,39,8,3,1,4,1,4,1,4,0,1,4,
  	5,0,2,4,6,8,0,4,1,0,18,19,1,0,12,13,1,0,10,11,1,0,2,4,42,0,10,1,0,0,0,
  	2,17,1,0,0,0,4,19,1,0,0,0,6,38,1,0,0,0,8,40,1,0,0,0,10,11,5,1,0,0,11,
  	13,3,8,4,0,12,14,5,20,0,0,13,12,1,0,0,0,14,15,1,0,0,0,15,13,1,0,0,0,15,
  	16,1,0,0,0,16,1,1,0,0,0,17,18,7,0,0,0,18,3,1,0,0,0,19,20,6,2,-1,0,20,
  	21,3,6,3,0,21,33,1,0,0,0,22,23,10,3,0,0,23,24,7,1,0,0,24,32,3,4,2,4,25,
  	26,10,2,0,0,26,27,7,2,0,0,27,32,3,4,2,3,28,29,10,1,0,0,29,30,5,7,0,0,
  	30,32,3,4,2,1,31,22,1,0,0,0,31,25,1,0,0,0,31,28,1,0,0,0,32,35,1,0,0,0,
  	33,31,1,0,0,0,33,34,1,0,0,0,34,5,1,0,0,0,35,33,1,0,0,0,36,39,3,2,1,0,
  	37,39,5,20,0,0,38,36,1,0,0,0,38,37,1,0,0,0,39,7,1,0,0,0,40,41,7,3,0,0,
  	41,9,1,0,0,0,4,15,31,33,38
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


//----------------- VarDefinitionContext ------------------------------------------------------------------

NCParser::VarDefinitionContext::VarDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* NCParser::VarDefinitionContext::Def() {
  return getToken(NCParser::Def, 0);
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
  enterRule(_localctx, 0, NCParser::RuleVarDefinition);
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
    setState(10);
    match(NCParser::Def);
    setState(11);
    primitiveType();
    setState(13); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(12);
      match(NCParser::ID);
      setState(15); 
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

tree::TerminalNode* NCParser::LiteralContext::DecimalLiteral() {
  return getToken(NCParser::DecimalLiteral, 0);
}

tree::TerminalNode* NCParser::LiteralContext::BoolLiteral() {
  return getToken(NCParser::BoolLiteral, 0);
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
  enterRule(_localctx, 2, NCParser::RuleLiteral);
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
    setState(17);
    _la = _input->LA(1);
    if (!(_la == NCParser::DecimalLiteral

    || _la == NCParser::BoolLiteral)) {
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

//----------------- ExpressionContext ------------------------------------------------------------------

NCParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

NCParser::PrimaryContext* NCParser::ExpressionContext::primary() {
  return getRuleContext<NCParser::PrimaryContext>(0);
}

std::vector<NCParser::ExpressionContext *> NCParser::ExpressionContext::expression() {
  return getRuleContexts<NCParser::ExpressionContext>();
}

NCParser::ExpressionContext* NCParser::ExpressionContext::expression(size_t i) {
  return getRuleContext<NCParser::ExpressionContext>(i);
}

tree::TerminalNode* NCParser::ExpressionContext::Star() {
  return getToken(NCParser::Star, 0);
}

tree::TerminalNode* NCParser::ExpressionContext::Div() {
  return getToken(NCParser::Div, 0);
}

tree::TerminalNode* NCParser::ExpressionContext::Plus() {
  return getToken(NCParser::Plus, 0);
}

tree::TerminalNode* NCParser::ExpressionContext::Minus() {
  return getToken(NCParser::Minus, 0);
}

tree::TerminalNode* NCParser::ExpressionContext::Equal() {
  return getToken(NCParser::Equal, 0);
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
  size_t startState = 4;
  enterRecursionRule(_localctx, 4, NCParser::RuleExpression, precedence);

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
    setState(20);
    primary();
    _ctx->stop = _input->LT(-1);
    setState(33);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(31);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(22);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(23);
          _la = _input->LA(1);
          if (!(_la == NCParser::Star

          || _la == NCParser::Div)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(24);
          expression(4);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(25);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(26);
          _la = _input->LA(1);
          if (!(_la == NCParser::Plus

          || _la == NCParser::Minus)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(27);
          expression(3);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(28);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(29);
          match(NCParser::Equal);
          setState(30);
          expression(1);
          break;
        }

        default:
          break;
        } 
      }
      setState(35);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx);
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
  enterRule(_localctx, 6, NCParser::RulePrimary);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(38);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case NCParser::DecimalLiteral:
      case NCParser::BoolLiteral: {
        enterOuterAlt(_localctx, 1);
        setState(36);
        literal();
        break;
      }

      case NCParser::ID: {
        enterOuterAlt(_localctx, 2);
        setState(37);
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

tree::TerminalNode* NCParser::PrimitiveTypeContext::Bool() {
  return getToken(NCParser::Bool, 0);
}

tree::TerminalNode* NCParser::PrimitiveTypeContext::Int() {
  return getToken(NCParser::Int, 0);
}

tree::TerminalNode* NCParser::PrimitiveTypeContext::Real() {
  return getToken(NCParser::Real, 0);
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
  enterRule(_localctx, 8, NCParser::RulePrimitiveType);
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
    setState(40);
    _la = _input->LA(1);
    if (!(((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 28) != 0)) {
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
    case 2: return expressionSempred(antlrcpp::downCast<ExpressionContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool NCParser::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 3);
    case 1: return precpred(_ctx, 2);
    case 2: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

void NCParser::initialize() {
  ::antlr4::internal::call_once(ncparserParserOnceFlag, ncparserParserInitialize);
}
