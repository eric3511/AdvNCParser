parser grammar NCParser;

options {
	tokenVocab = NCLexer;
}

prog
    : varDefinition
    | expression
    ;

varDefinition
    : DEF primitiveType ID+
    ;

literal
    : DECIMAL
    | BOOLEAN
    ;

expressionList
    : expression (COMMA expression)*
    ;



expression
    : primary
    | LPAREN expression RPAREN
    | expression LBRACK expression RBRACK
    | functionCall
    | SUB expression
    | B_NOT expression
    | expression (B_AND|B_OR|B_XOR) expression
    | expression (MUL|DIV) expression
    | expression (SUB|ADD) expression
    | expression (GT|GE|LT|LE|EQ|NE) expression
    | expression (AND|OR|XOR) expression
    | NOT expression
    | <assoc = right> expression ASSIGN expression
    ;
    
functionCall
    : ID LPAREN expressionList RPAREN
    ;

primary
    : literal
    | ID
    ;

primitiveType
    : BOOL
    | CHAR
    | INT
    | REAL
    ;
