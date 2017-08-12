[Variable](https://en.wikipedia.org/wiki/Variable_(computer_science)) from wikipedia:
> In computer programming, a variable is a storage location paired with an associated symbolic name (an identifier), which contains some known or unknown quantity of information referred to as a value.

A variable in C++ shows exactly the above definination. Let's call value variable.
```
int pi = 3.14;
int count = 0;
```

In C++, we also have concept of [reference](https://en.wikipedia.org/wiki/Reference_(C%2B%2B)). 
We can understand it as an alias of a variable.
```
int &this_count = count;
```

A reference always reference to a variable.
Usually a value have a name, which is variable, and we can reference the variable.
If there is value, which have no name, e.g. tempary value, we cannot reference it, as there is no variable.
C++11 even introduce rvalue reference.

In Python, there is no variable but only reference.
```
var count = 0
```
count is a reference, which reference an interal variable, whose value is 3.14.

Whenever count has a new value, it actually references a new variable.
```
count = 1
```
count actually reference to a new interal variable.
We can use function id to get the id of the interal variable.

Regarding parameters in a function, there is no suprise.
In C++, a parameter can be variable, lvalue reference, rvalue reference.
In Python, parameter can only be lvale reference.
