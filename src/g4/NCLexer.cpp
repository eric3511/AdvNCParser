
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
      "DEF", "REDEF", "NCK", "CHAN", "BOOL", "CHAR", "INT", "REAL", "IF", 
      "THEN", "ELSE", "ENDIF", "WHILE", "ENDWHILE", "B_NOT", "B_AND", "B_OR", 
      "B_XOR", "LT", "GT", "LE", "GE", "EQ", "NE", "AND", "OR", "NOT", "XOR", 
      "ADD", "SUB", "MUL", "DIVP", "DIV", "MOD", "ASSIGN", "LPAREN", "RPAREN", 
      "LBRACK", "RBRACK", "COMMA", "DECIMAL", "Digit", "BOOLEAN", "ID", 
      "Letter", "WS"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
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
  	4,0,44,297,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,
  	7,28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,35,
  	7,35,2,36,7,36,2,37,7,37,2,38,7,38,2,39,7,39,2,40,7,40,2,41,7,41,2,42,
  	7,42,2,43,7,43,2,44,7,44,2,45,7,45,1,0,1,0,1,0,1,0,1,1,1,1,1,1,1,1,1,
  	1,1,1,1,2,1,2,1,2,1,2,1,3,1,3,1,3,1,3,1,3,1,4,1,4,1,4,1,4,1,4,1,5,1,5,
  	1,5,1,5,1,5,1,6,1,6,1,6,1,6,1,7,1,7,1,7,1,7,1,7,1,8,1,8,1,8,1,9,1,9,1,
  	9,1,9,1,9,1,10,1,10,1,10,1,10,1,10,1,11,1,11,1,11,1,11,1,11,1,11,1,12,
  	1,12,1,12,1,12,1,12,1,12,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,
  	1,14,1,14,1,14,1,14,1,14,1,14,1,15,1,15,1,15,1,15,1,15,1,15,1,16,1,16,
  	1,16,1,16,1,16,1,17,1,17,1,17,1,17,1,17,1,17,1,18,1,18,1,18,3,18,192,
  	8,18,1,19,1,19,1,19,3,19,197,8,19,1,20,1,20,1,20,1,20,3,20,203,8,20,1,
  	21,1,21,1,21,1,21,3,21,209,8,21,1,22,1,22,1,22,1,23,1,23,1,23,1,24,1,
  	24,1,24,1,24,1,25,1,25,1,25,1,26,1,26,1,26,1,26,1,27,1,27,1,27,1,27,1,
  	28,1,28,1,29,1,29,1,30,1,30,1,31,1,31,1,31,1,31,1,32,1,32,1,33,1,33,1,
  	33,1,33,1,34,1,34,1,35,1,35,1,36,1,36,1,37,1,37,1,38,1,38,1,39,1,39,1,
  	40,4,40,261,8,40,11,40,12,40,262,1,41,4,41,266,8,41,11,41,12,41,267,1,
  	42,1,42,1,42,1,42,1,42,1,42,1,42,1,42,1,42,3,42,279,8,42,1,43,1,43,1,
  	43,5,43,284,8,43,10,43,12,43,287,9,43,1,44,1,44,1,45,4,45,292,8,45,11,
  	45,12,45,293,1,45,1,45,0,0,46,1,1,3,2,5,3,7,4,9,5,11,6,13,7,15,8,17,9,
  	19,10,21,11,23,12,25,13,27,14,29,15,31,16,33,17,35,18,37,19,39,20,41,
  	21,43,22,45,23,47,24,49,25,51,26,53,27,55,28,57,29,59,30,61,31,63,32,
  	65,33,67,34,69,35,71,36,73,37,75,38,77,39,79,40,81,41,83,0,85,42,87,43,
  	89,0,91,44,1,0,3,1,0,48,57,2,0,65,90,97,122,3,0,9,10,13,13,32,32,304,
  	0,1,1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,
  	0,0,0,13,1,0,0,0,0,15,1,0,0,0,0,17,1,0,0,0,0,19,1,0,0,0,0,21,1,0,0,0,
  	0,23,1,0,0,0,0,25,1,0,0,0,0,27,1,0,0,0,0,29,1,0,0,0,0,31,1,0,0,0,0,33,
  	1,0,0,0,0,35,1,0,0,0,0,37,1,0,0,0,0,39,1,0,0,0,0,41,1,0,0,0,0,43,1,0,
  	0,0,0,45,1,0,0,0,0,47,1,0,0,0,0,49,1,0,0,0,0,51,1,0,0,0,0,53,1,0,0,0,
  	0,55,1,0,0,0,0,57,1,0,0,0,0,59,1,0,0,0,0,61,1,0,0,0,0,63,1,0,0,0,0,65,
  	1,0,0,0,0,67,1,0,0,0,0,69,1,0,0,0,0,71,1,0,0,0,0,73,1,0,0,0,0,75,1,0,
  	0,0,0,77,1,0,0,0,0,79,1,0,0,0,0,81,1,0,0,0,0,85,1,0,0,0,0,87,1,0,0,0,
  	0,91,1,0,0,0,1,93,1,0,0,0,3,97,1,0,0,0,5,103,1,0,0,0,7,107,1,0,0,0,9,
  	112,1,0,0,0,11,117,1,0,0,0,13,122,1,0,0,0,15,126,1,0,0,0,17,131,1,0,0,
  	0,19,134,1,0,0,0,21,139,1,0,0,0,23,144,1,0,0,0,25,150,1,0,0,0,27,156,
  	1,0,0,0,29,165,1,0,0,0,31,171,1,0,0,0,33,177,1,0,0,0,35,182,1,0,0,0,37,
  	191,1,0,0,0,39,196,1,0,0,0,41,202,1,0,0,0,43,208,1,0,0,0,45,210,1,0,0,
  	0,47,213,1,0,0,0,49,216,1,0,0,0,51,220,1,0,0,0,53,223,1,0,0,0,55,227,
  	1,0,0,0,57,231,1,0,0,0,59,233,1,0,0,0,61,235,1,0,0,0,63,237,1,0,0,0,65,
  	241,1,0,0,0,67,243,1,0,0,0,69,247,1,0,0,0,71,249,1,0,0,0,73,251,1,0,0,
  	0,75,253,1,0,0,0,77,255,1,0,0,0,79,257,1,0,0,0,81,260,1,0,0,0,83,265,
  	1,0,0,0,85,278,1,0,0,0,87,280,1,0,0,0,89,288,1,0,0,0,91,291,1,0,0,0,93,
  	94,5,68,0,0,94,95,5,69,0,0,95,96,5,70,0,0,96,2,1,0,0,0,97,98,5,82,0,0,
  	98,99,5,69,0,0,99,100,5,68,0,0,100,101,5,69,0,0,101,102,5,70,0,0,102,
  	4,1,0,0,0,103,104,5,78,0,0,104,105,5,67,0,0,105,106,5,75,0,0,106,6,1,
  	0,0,0,107,108,5,67,0,0,108,109,5,72,0,0,109,110,5,65,0,0,110,111,5,78,
  	0,0,111,8,1,0,0,0,112,113,5,66,0,0,113,114,5,79,0,0,114,115,5,79,0,0,
  	115,116,5,76,0,0,116,10,1,0,0,0,117,118,5,67,0,0,118,119,5,72,0,0,119,
  	120,5,65,0,0,120,121,5,82,0,0,121,12,1,0,0,0,122,123,5,73,0,0,123,124,
  	5,78,0,0,124,125,5,84,0,0,125,14,1,0,0,0,126,127,5,82,0,0,127,128,5,69,
  	0,0,128,129,5,65,0,0,129,130,5,76,0,0,130,16,1,0,0,0,131,132,5,73,0,0,
  	132,133,5,70,0,0,133,18,1,0,0,0,134,135,5,84,0,0,135,136,5,72,0,0,136,
  	137,5,69,0,0,137,138,5,78,0,0,138,20,1,0,0,0,139,140,5,69,0,0,140,141,
  	5,76,0,0,141,142,5,83,0,0,142,143,5,69,0,0,143,22,1,0,0,0,144,145,5,69,
  	0,0,145,146,5,78,0,0,146,147,5,68,0,0,147,148,5,73,0,0,148,149,5,70,0,
  	0,149,24,1,0,0,0,150,151,5,87,0,0,151,152,5,72,0,0,152,153,5,73,0,0,153,
  	154,5,76,0,0,154,155,5,69,0,0,155,26,1,0,0,0,156,157,5,69,0,0,157,158,
  	5,78,0,0,158,159,5,68,0,0,159,160,5,87,0,0,160,161,5,72,0,0,161,162,5,
  	73,0,0,162,163,5,76,0,0,163,164,5,69,0,0,164,28,1,0,0,0,165,166,5,66,
  	0,0,166,167,5,95,0,0,167,168,5,78,0,0,168,169,5,79,0,0,169,170,5,84,0,
  	0,170,30,1,0,0,0,171,172,5,66,0,0,172,173,5,95,0,0,173,174,5,65,0,0,174,
  	175,5,78,0,0,175,176,5,68,0,0,176,32,1,0,0,0,177,178,5,66,0,0,178,179,
  	5,95,0,0,179,180,5,79,0,0,180,181,5,82,0,0,181,34,1,0,0,0,182,183,5,66,
  	0,0,183,184,5,95,0,0,184,185,5,88,0,0,185,186,5,79,0,0,186,187,5,82,0,
  	0,187,36,1,0,0,0,188,192,5,60,0,0,189,190,5,76,0,0,190,192,5,84,0,0,191,
  	188,1,0,0,0,191,189,1,0,0,0,192,38,1,0,0,0,193,197,5,62,0,0,194,195,5,
  	71,0,0,195,197,5,84,0,0,196,193,1,0,0,0,196,194,1,0,0,0,197,40,1,0,0,
  	0,198,199,5,60,0,0,199,203,5,61,0,0,200,201,5,76,0,0,201,203,5,69,0,0,
  	202,198,1,0,0,0,202,200,1,0,0,0,203,42,1,0,0,0,204,205,5,62,0,0,205,209,
  	5,61,0,0,206,207,5,71,0,0,207,209,5,69,0,0,208,204,1,0,0,0,208,206,1,
  	0,0,0,209,44,1,0,0,0,210,211,5,61,0,0,211,212,5,61,0,0,212,46,1,0,0,0,
  	213,214,5,60,0,0,214,215,5,62,0,0,215,48,1,0,0,0,216,217,5,65,0,0,217,
  	218,5,78,0,0,218,219,5,68,0,0,219,50,1,0,0,0,220,221,5,79,0,0,221,222,
  	5,82,0,0,222,52,1,0,0,0,223,224,5,78,0,0,224,225,5,79,0,0,225,226,5,84,
  	0,0,226,54,1,0,0,0,227,228,5,88,0,0,228,229,5,79,0,0,229,230,5,82,0,0,
  	230,56,1,0,0,0,231,232,5,43,0,0,232,58,1,0,0,0,233,234,5,45,0,0,234,60,
  	1,0,0,0,235,236,5,42,0,0,236,62,1,0,0,0,237,238,5,68,0,0,238,239,5,73,
  	0,0,239,240,5,86,0,0,240,64,1,0,0,0,241,242,5,47,0,0,242,66,1,0,0,0,243,
  	244,5,77,0,0,244,245,5,79,0,0,245,246,5,68,0,0,246,68,1,0,0,0,247,248,
  	5,61,0,0,248,70,1,0,0,0,249,250,5,40,0,0,250,72,1,0,0,0,251,252,5,41,
  	0,0,252,74,1,0,0,0,253,254,5,91,0,0,254,76,1,0,0,0,255,256,5,93,0,0,256,
  	78,1,0,0,0,257,258,5,44,0,0,258,80,1,0,0,0,259,261,3,83,41,0,260,259,
  	1,0,0,0,261,262,1,0,0,0,262,260,1,0,0,0,262,263,1,0,0,0,263,82,1,0,0,
  	0,264,266,7,0,0,0,265,264,1,0,0,0,266,267,1,0,0,0,267,265,1,0,0,0,267,
  	268,1,0,0,0,268,84,1,0,0,0,269,270,5,84,0,0,270,271,5,82,0,0,271,272,
  	5,85,0,0,272,279,5,69,0,0,273,274,5,70,0,0,274,275,5,65,0,0,275,276,5,
  	76,0,0,276,277,5,83,0,0,277,279,5,69,0,0,278,269,1,0,0,0,278,273,1,0,
  	0,0,279,86,1,0,0,0,280,285,3,89,44,0,281,284,3,89,44,0,282,284,7,0,0,
  	0,283,281,1,0,0,0,283,282,1,0,0,0,284,287,1,0,0,0,285,283,1,0,0,0,285,
  	286,1,0,0,0,286,88,1,0,0,0,287,285,1,0,0,0,288,289,7,1,0,0,289,90,1,0,
  	0,0,290,292,7,2,0,0,291,290,1,0,0,0,292,293,1,0,0,0,293,291,1,0,0,0,293,
  	294,1,0,0,0,294,295,1,0,0,0,295,296,6,45,0,0,296,92,1,0,0,0,11,0,191,
  	196,202,208,262,267,278,283,285,293,1,6,0,0
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
