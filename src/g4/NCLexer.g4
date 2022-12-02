lexer grammar NCLexer;

// keywords

DEF: 'DEF';
REDEF: 'REDEF';
NCK: 'NCK';
CHAN: 'CHAN';


BOOL: 'BOOL';
CHAR: 'CHAR';
INT: 'INT';
REAL: 'REAL';


IF: 'IF';
THEN: 'THEN';
ELSE: 'ELSE';
ENDIF: 'ENDIF';
WHILE: 'WHILE';
ENDWHILE: 'ENDWHILE';



// Operators

B_NOT: 'B_NOT';
B_AND: 'B_AND';
B_OR: 'B_OR';
B_XOR: 'B_XOR';

LT: '<'|'LT';
GT: '>'|'GT';
LE: '<='|'LE';
GE: '>='|'GE';
EQ: '==';
NE: '<>';

AND: 'AND';
OR: 'OR';
NOT: 'NOT';
XOR: 'XOR';

ADD: '+';
SUB: '-';
MUL: '*';
DIVP: 'DIV';
DIV: '/';
MOD: 'MOD';

ASSIGN: '=';



LPAREN: '(';
RPAREN: ')';
LBRACK: '[';
RBRACK: ']';
COMMA: ',';

//Literals

DECIMAL: Digit+;
fragment Digit: [0-9]+;

BOOLEAN: 'TRUE'|'FALSE';

// Identifiers
ID: Letter (Letter | [0-9])*;
fragment Letter : [a-zA-Z];

WS: [ \t\r\n]+ -> skip;