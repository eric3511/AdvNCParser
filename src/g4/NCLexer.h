
// Generated from /home/eric/project/NCParser/src/g4/NCLexer.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"




class  NCLexer : public antlr4::Lexer {
public:
  enum {
    Def = 1, Int = 2, Real = 3, Bool = 4, LessThan = 5, GreaterThan = 6, 
    Equal = 7, And = 8, Or = 9, Plus = 10, Minus = 11, Star = 12, Div = 13, 
    LParen = 14, RParen = 15, LBrack = 16, RBrack = 17, DecimalLiteral = 18, 
    BoolLiteral = 19, ID = 20
  };

  explicit NCLexer(antlr4::CharStream *input);

  ~NCLexer() override;


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

