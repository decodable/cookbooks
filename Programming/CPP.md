
# Understand Code
1. vim
2. ctags
3. cscope

```
touch tags.lst
find | grep "\.c$" >> tags.lst
find | grep "\.cpp$" >> tags.lst
find | grep "\.h$" >> tags.lst
cscope -i tags.lst
```

# Style Guide
[Google C++ Style Guide](https://google.github.io/styleguide/cppguide.html)

# Analysis Code Statically
1. cppcheck
2. Coverity Scan

# Document
[Doxygen](http://www.stack.nl/~dimitri/doxygen/)

# Make
[cmake](cmake.md)

# Test
[Google Test](https://github.com/google/googletest)

# Analysis Code Dynamically
1. GDB
2. Valgrind

