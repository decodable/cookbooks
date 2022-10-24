
# New Language
## performance enhancements
### Rvalue references
```
Remember that “&&” indicates a universal reference only where type deduction takes place.  
Where there’s no type deduction, there’s no universal reference.  
In such cases, “&&” in type declarations always means rvalue reference. 

Universal references can only occur in the form “T&&”!  
Even the simple addition of a const qualifier is enough to disable 
the interpretation of “&&” as a universal reference.
```

E.g.

```
void foo(int &&) {
}

template<class T>
void bar(const T &&) {
}

...

int val = 1;
foo(val); // error: cannot bind ‘int’ lvalue to ‘int&&’
bar(val); // error: cannot bind ‘int’ lvalue to ‘int&&’

foo(1); // ok
bar(1); // ok

foo(std::move(val)); // ok
bar(std::move(val)); // ok
```

See detail in [Universal References](https://isocpp.org/blog/2012/11/universal-references-in-c11-scott-meyers).

### move semantics
With rvalue reference, it looks like we can now continue to use tempary objects after it is destroied. In fact, tempary objects will still be destroied, they are just move from one object to another.

The move constructor / move assignment is just like copy constructor / copy assignment, however, instead of copy, it move the states from one object, which you will not use afterwards, to new object.

When you want someone to copy your object, explictly implement it, otherwise forbid it.

When you want someone to move your object, explictly implement it, otherwise forbid it.

I prefer to implement move constructor and forbid copy constructor.

See detail in [C++ Rvalue References Explained](http://thbecker.net/articles/rvalue_references/section_01.html)

## usability enhancements
### Type inference
```
auto x = sqrt(2); 
// range for loop
for (auto x : v) cout << x;
// rvalue reference
```

# New Library

# Q&A
1. Why to have rvalue reference?

# References
1. [C++11 - Wikipedia](https://en.wikipedia.org/wiki/C%2B%2B11)
2. [C++11 - the new ISO C++ standard](http://www.stroustrup.com/C++11FAQ.html)
3. [Under the hood of lambdas and std::function](http://shaharmike.com/cpp/lambdas-and-functions/)
4. [Using auto_ptr Effectively](http://www.gotw.ca/publications/using_auto_ptr_effectively.htm)
5. [C++11: std::function and std::bind](https://oopscenities.net/2012/02/24/c11-stdfunction-and-stdbind/)
6. [Multithreading in C++0x](https://www.justsoftwaresolutions.co.uk/threading/multithreading-in-c++0x-part-1-starting-threads.html)
7. [Curious C++ Lambda Examples](https://dzone.com/articles/5-curious-c-lambda-examples-recursion-constexpr-co)
