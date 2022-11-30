#include<iostream>
#include<string>

#include "antlr4-runtime.h"
#include "TLexer.h"
#include "TParser.h"

using namespace antlr4;


int main(int argc, char **argv){


    ANTLRInputStream input(u8"🍴 = 🍐 + \"😎\";(((x * π))) * µ + ∰; a + (x * (y ? 0 : 1) + z);");
    TLexer lexer(&input);
    CommonTokenStream tokens(&lexer);

    tokens.fill();
    for(auto token : tokens.getTokens()){
        std::cout<< token->toString()<<std::endl;
    }

    std::cout<<"hello antlr4"<<std::endl;

    return 0;
}