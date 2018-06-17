%{
  int num_lines, num_words, num_bytes;
%}
WORD [^ \t\n]+
%option noyywrap

%%
%{
  num_lines = 0, num_words = 0, num_bytes = 0;
%}
\n     { num_lines++; num_bytes++; }
{WORD} { num_words++; num_bytes += yyleng; }
.      { num_bytes++; }

%%
int main(int argc, char* argv[]) {
  yylex();
  printf("%d\t%d\t%d\n", num_lines, num_words, num_bytes);

  return 0;
}
