lexer grammar NCLexer;

// keywords

Def: 'DEF';
Int: 'INT';
Real: 'REAL';
Bool: 'BOOL';


// Operators

LessThan: '<';
GreaterThan: '>';
Equal: '=';
And: 'AND';
Or: 'OR';

Plus: '+';
Minus: '-';
Star: '*';
Div: '/';

LParen: '(';
RParen: ')';
LBrack: '[';
RBrack: ']';

//Literals

DecimalLiteral: Digit+;
fragment  Digit: [0-9]+;

BoolLiteral: 'TRUE'
           | 'FALSE'
           ;

// Identifiers

ID: Letter (Letter | [0-9])*;
fragment Letter : [a-zA-Z];
