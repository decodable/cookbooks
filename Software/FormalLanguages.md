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
3. [The Lex & Yacc Page](http://dinosaur.compilertools.net/)
4. [Kaleidoscope: Tutorial Introduction and the Lexer](http://llvm.org/docs/tutorial/OCamlLangImpl1.html)
5. [How to build LLVM, libclang, and liblld from source](https://github.com/ziglang/zig/wiki/How-to-build-LLVM,-libclang,-and-liblld-from-source)
6. [Using libclang to Parse C++ (aka libclang 101)](https://shaharmike.com/cpp/libclang/)
7. [Basic source-to-source transformation with Clang](https://eli.thegreenplace.net/2012/06/08/basic-source-to-source-transformation-with-clang)
8. [Baby steps with `libclang`: Walking an abstract syntax tree](http://bastian.rieck.ru/blog/posts/2015/baby_steps_libclang_ast/)
9. [Understanding the Clang AST](https://jonasdevlieghere.com/understanding-the-clang-ast/)
10. [CLang tutorial to build a branch coverage measuring tool](http://swtv.kaist.ac.kr/courses/cs453-fall13/Clang%20tutorial%20v4.pdf) from [Automated Software Testing](http://swtv.kaist.ac.kr/courses/cs453-fall13)
11. [Development/Clang plugins](https://wiki.documentfoundation.org/Development/Clang_plugins)
