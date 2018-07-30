
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

[Better code understanding with Sourcetrail](https://www.bfilipek.com/2017/10/sourcetrail.html)

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

# C++ vs C
1. [Scope Regions in C++](http://www.drdobbs.com/cpp/scope-regions-in-c/240002006)

# References
1. [Monotonic Clocks – the Right Way to Determine Elapsed Time](https://www.softwariness.com/articles/monotonic-clocks-windows-and-posix/)
2. [Measuring Execution Time Accurately and Setting Deadlines](http://john-ahlgren.blogspot.com/2013/09/measuring-execution-time-accurately-and.html)
3. [Measure time in Linux](http://stackoverflow.com/questions/12392278/measure-time-in-linux-time-vs-clock-vs-getrusage-vs-clock-gettime-vs-gettimeof)
4. [Rule of three](https://en.wikipedia.org/wiki/Rule_of_three_(C%2B%2B_programming))
5. [Dynamic memory management](http://en.cppreference.com/w/cpp/memory)
6. [Template metaprogramming](https://en.wikipedia.org/wiki/Template_metaprogramming)

