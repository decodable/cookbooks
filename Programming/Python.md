## Tips
### Tip - assignment
When you assign a variable with another variable, they point to the same object.

When you assign a variable with an object, it points to the new object.

We can always use id() function to see whether they are same object.

### Tip - Multable
list, bytearray are multable

str, tuple, dict are immultable

### Tip - Comprehensions
Thanks Python, comprehension is really easy to understand as it is english.
```
[n ** 2 for n in range(10) if not n % 2]
{c: k for k, c in enumerate(ascii_lowercase, 1)}
```

### Tip - Generator Object
[Generator functions in C++](https://paoloseverini.wordpress.com/2014/06/09/generator-functions-in-c/) is not easy.

VIM
```
ctags -R --fields=+l --languages=python --python-kinds=-iv ./
```

# References
1. [Navigating your Django project with Vim and ctags](https://www.fusionbox.com/blog/detail/navigating-your-django-project-with-vim-and-ctags/590/)
2. [C++ Has Become More Pythonic](http://preshing.com/20141202/cpp-has-become-more-pythonic/)
3. [Mixins and Python](https://www.ianlewis.org/en/mixins-and-python)
4. [Understanding Python's "with" statement](http://effbot.org/zone/python-with-statement.htm)
5. [switch from C++ to Python](https://www.quora.com/How-does-one-make-the-switch-from-C++-to-Python-I-am-most-comfortable-with-C++-and-have-been-using-it-to-do-most-of-my-programming-I-find-that-it-is-very-time-consuming-and-Python-gets-things-done-fast-What-is-the-best-way-to-make-the-switch)
