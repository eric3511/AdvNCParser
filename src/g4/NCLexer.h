
// Generated from /home/eric/project/NCParser/src/g4/NCLexer.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"




class  NCLexer : public antlr4::Lexer {
public:
  enum {
    DEF = 1, REDEF = 2, NCK = 3, CHAN = 4, BOOL = 5, CHAR = 6, INT = 7, 
    REAL = 8, IF = 9, THEN = 10, ELSE = 11, ENDIF = 12, WHILE = 13, ENDWHILE = 14, 
    B_NOT = 15, B_AND = 16, B_OR = 17, B_XOR = 18, LT = 19, GT = 20, LE = 21, 
    GE = 22, EQ = 23, NE = 24, AND = 25, OR = 26, NOT = 27, XOR = 28, ADD = 29, 
    SUB = 30, MUL = 31, DIVP = 32, DIV = 33, MOD = 34, ASSIGN = 35, LPAREN = 36, 
    RPAREN = 37, LBRACK = 38, RBRACK = 39, COMMA = 40, DECIMAL = 41, BOOLEAN = 42, 
    ID = 43, WS = 44
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

