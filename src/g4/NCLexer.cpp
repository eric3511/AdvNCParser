
// Generated from /home/eric/project/NCParser/src/g4/NCLexer.g4 by ANTLR 4.11.1


#include "NCLexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct NCLexerStaticData final {
  NCLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  NCLexerStaticData(const NCLexerStaticData&) = delete;
  NCLexerStaticData(NCLexerStaticData&&) = delete;
  NCLexerStaticData& operator=(const NCLexerStaticData&) = delete;
  NCLexerStaticData& operator=(NCLexerStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> channelNames;
  const std::vector<std::string> modeNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag nclexerLexerOnceFlag;
NCLexerStaticData *nclexerLexerStaticData = nullptr;

void nclexerLexerInitialize() {
  assert(nclexerLexerStaticData == nullptr);
  auto staticData = std::make_unique<NCLexerStaticData>(
    std::vector<std::string>{
      "Def", "Int", "Real", "Bool", "LessThan", "GreaterThan", "Equal", 
      "And", "Or", "Plus", "Minus", "Star", "Div", "LParen", "RParen", "LBrack", 
      "RBrack", "DecimalLiteral", "Digit", "BoolLiteral", "ID", "Letter"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
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
  	4,0,20,123,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,1,0,1,0,1,0,1,0,1,1,1,1,1,1,1,1,1,2,1,2,1,2,1,2,1,2,1,3,1,3,1,3,
  	1,3,1,3,1,4,1,4,1,5,1,5,1,6,1,6,1,7,1,7,1,7,1,7,1,8,1,8,1,8,1,9,1,9,1,
  	10,1,10,1,11,1,11,1,12,1,12,1,13,1,13,1,14,1,14,1,15,1,15,1,16,1,16,1,
  	17,4,17,94,8,17,11,17,12,17,95,1,18,4,18,99,8,18,11,18,12,18,100,1,19,
  	1,19,1,19,1,19,1,19,1,19,1,19,1,19,1,19,3,19,112,8,19,1,20,1,20,1,20,
  	5,20,117,8,20,10,20,12,20,120,9,20,1,21,1,21,0,0,22,1,1,3,2,5,3,7,4,9,
  	5,11,6,13,7,15,8,17,9,19,10,21,11,23,12,25,13,27,14,29,15,31,16,33,17,
  	35,18,37,0,39,19,41,20,43,0,1,0,2,1,0,48,57,2,0,65,90,97,122,125,0,1,
  	1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,0,0,
  	0,13,1,0,0,0,0,15,1,0,0,0,0,17,1,0,0,0,0,19,1,0,0,0,0,21,1,0,0,0,0,23,
  	1,0,0,0,0,25,1,0,0,0,0,27,1,0,0,0,0,29,1,0,0,0,0,31,1,0,0,0,0,33,1,0,
  	0,0,0,35,1,0,0,0,0,39,1,0,0,0,0,41,1,0,0,0,1,45,1,0,0,0,3,49,1,0,0,0,
  	5,53,1,0,0,0,7,58,1,0,0,0,9,63,1,0,0,0,11,65,1,0,0,0,13,67,1,0,0,0,15,
  	69,1,0,0,0,17,73,1,0,0,0,19,76,1,0,0,0,21,78,1,0,0,0,23,80,1,0,0,0,25,
  	82,1,0,0,0,27,84,1,0,0,0,29,86,1,0,0,0,31,88,1,0,0,0,33,90,1,0,0,0,35,
  	93,1,0,0,0,37,98,1,0,0,0,39,111,1,0,0,0,41,113,1,0,0,0,43,121,1,0,0,0,
  	45,46,5,68,0,0,46,47,5,69,0,0,47,48,5,70,0,0,48,2,1,0,0,0,49,50,5,73,
  	0,0,50,51,5,78,0,0,51,52,5,84,0,0,52,4,1,0,0,0,53,54,5,82,0,0,54,55,5,
  	69,0,0,55,56,5,65,0,0,56,57,5,76,0,0,57,6,1,0,0,0,58,59,5,66,0,0,59,60,
  	5,79,0,0,60,61,5,79,0,0,61,62,5,76,0,0,62,8,1,0,0,0,63,64,5,60,0,0,64,
  	10,1,0,0,0,65,66,5,62,0,0,66,12,1,0,0,0,67,68,5,61,0,0,68,14,1,0,0,0,
  	69,70,5,65,0,0,70,71,5,78,0,0,71,72,5,68,0,0,72,16,1,0,0,0,73,74,5,79,
  	0,0,74,75,5,82,0,0,75,18,1,0,0,0,76,77,5,43,0,0,77,20,1,0,0,0,78,79,5,
  	45,0,0,79,22,1,0,0,0,80,81,5,42,0,0,81,24,1,0,0,0,82,83,5,47,0,0,83,26,
  	1,0,0,0,84,85,5,40,0,0,85,28,1,0,0,0,86,87,5,41,0,0,87,30,1,0,0,0,88,
  	89,5,91,0,0,89,32,1,0,0,0,90,91,5,93,0,0,91,34,1,0,0,0,92,94,3,37,18,
  	0,93,92,1,0,0,0,94,95,1,0,0,0,95,93,1,0,0,0,95,96,1,0,0,0,96,36,1,0,0,
  	0,97,99,7,0,0,0,98,97,1,0,0,0,99,100,1,0,0,0,100,98,1,0,0,0,100,101,1,
  	0,0,0,101,38,1,0,0,0,102,103,5,84,0,0,103,104,5,82,0,0,104,105,5,85,0,
  	0,105,112,5,69,0,0,106,107,5,70,0,0,107,108,5,65,0,0,108,109,5,76,0,0,
  	109,110,5,83,0,0,110,112,5,69,0,0,111,102,1,0,0,0,111,106,1,0,0,0,112,
  	40,1,0,0,0,113,118,3,43,21,0,114,117,3,43,21,0,115,117,7,0,0,0,116,114,
  	1,0,0,0,116,115,1,0,0,0,117,120,1,0,0,0,118,116,1,0,0,0,118,119,1,0,0,
  	0,119,42,1,0,0,0,120,118,1,0,0,0,121,122,7,1,0,0,122,44,1,0,0,0,6,0,95,
  	100,111,116,118,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  nclexerLexerStaticData = staticData.release();
}

}

NCLexer::NCLexer(CharStream *input) : Lexer(input) {
  NCLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *nclexerLexerStaticData->atn, nclexerLexerStaticData->decisionToDFA, nclexerLexerStaticData->sharedContextCache);
}

NCLexer::~NCLexer() {
  delete _interpreter;
}

std::string NCLexer::getGrammarFileName() const {
  return "NCLexer.g4";
}

const std::vector<std::string>& NCLexer::getRuleNames() const {
  return nclexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& NCLexer::getChannelNames() const {
  return nclexerLexerStaticData->channelNames;
}

const std::vector<std::string>& NCLexer::getModeNames() const {
  return nclexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& NCLexer::getVocabulary() const {
  return nclexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView NCLexer::getSerializedATN() const {
  return nclexerLexerStaticData->serializedATN;
}

const atn::ATN& NCLexer::getATN() const {
  return *nclexerLexerStaticData->atn;
}




void NCLexer::initialize() {
  ::antlr4::internal::call_once(nclexerLexerOnceFlag, nclexerLexerInitialize);
}