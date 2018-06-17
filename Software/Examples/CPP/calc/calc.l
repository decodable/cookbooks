%{
#include <stdlib.h>
#include "calc.hpp"

extern "C" int yylex();
%}
BLANK [ \t\n]
INT   [0-9]+
OP    [+]
%option noyywrap

%%
{BLANK} ;
{INT}   { yylval = atoi(yytext); return INT; }
{OP}    { return *yytext; }

%%
