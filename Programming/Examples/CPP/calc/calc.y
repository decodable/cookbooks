%{
#include <iostream>
extern "C" int yylex();
extern "C" int yyparse();
extern "C" FILE *yyin;

void yyerror(const char *s);

using namespace std;
%}

%token INT
%left '+'

%%
program:
    program statement
    | /*NULL*/
    ;

statement:
    INT '+' INT    { cout << $1 << " + " << $3 << " = " << ($1 + $3) << endl; }
    ;
%%

int main(int argc, char* argv[]) {
  if (argc > 0) {
    FILE *fd = fopen(argv[1], "r");
    yyin = fd;
  }

  do {
    yyparse();
  } while(!feof(yyin));
}

void yyerror(const char *s) {
  cout << "parse error!  Message: " << s << endl;
  exit(-1);
}
