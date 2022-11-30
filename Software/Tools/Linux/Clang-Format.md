# Config
```
clang-format -style=google -dump-config > ~/.clang-format
```

Change `~/.clang-format`
```
AccessModifierOffset: -2
BreakBeforeBraces: Allman
```
# Format
```
clang-format -i test.cpp
```

```
clang-format -i -lines=818:980 test.cpp
```

# References
1. [Clang-Format Style Options](https://clang.llvm.org/docs/ClangFormatStyleOptions.html)
