#include<iostream>
#include<string>

#include "antlr4-runtime.h"
#include "NCLexer.h"
#include "NCParser.h"

using namespace antlr4;


int main(int argc, char **argv){


    ANTLRInputStream input("DEF INT A89");
    NCLexer lexer(&input);
    CommonTokenStream tokens(&lexer);

    tokens.fill();
    for(auto token : tokens.getTokens()){
        std::cout<< token->toString()<<std::endl;
    }


    return 0;
}