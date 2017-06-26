# Formal Languages
| Grammer | Language Example | Language Recognizer   | Language Recognizer Generator |
|---------|:-----------------|:----------------------|:------------------------------|
| Regular | a<sub>n</sub>    | Finite State Automata | Lex / [Flex](https://github.com/westes/flex)                  |
| Context-free | a<sub>n</sub>b<sub>n</sub> | Push-down State Automata | Yacc / Bison                  |
| Context-sensitive | a<sub>n</sub>b<sub>n</sub>c<sub>n</sub> | Turing Machine |                   |


## Regular

Example to count word: [wc.l](Examples/CPP/wc-flex/wc.l)
```cpp
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
```

## Context Free

## Context Sensitive

# References
1. [Formal Languages](http://csfieldguide.org.nz/en/chapters/formal-languages.html)
2. [Using Flex](http://cs.umw.edu/~finlayson/class/spring15/cpsc401/notes/04-flex.html)
