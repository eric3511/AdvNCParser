parser grammar NCParser;

options {
	tokenVocab = NCLexer;
}

varDefinition
    : Def primitiveType ID+
    ;

literal
    : DecimalLiteral
    | BoolLiteral
    ;

expression
    : primary
    | expression (Star | Div) expression
    | expression (Plus | Minus) expression
    | <assoc = right> expression Equal expression
    ;


primary
    : literal
    | ID
    ;

primitiveType
    : Bool
    | Int
    | Real
    ;
