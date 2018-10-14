## Tips
### Tip - assignment
When you assign a variable with another variable, they point to the same object.

When you assign a variable with an object, it points to the new object.

We can always use id() function to see whether they are same object.

### Tip - Multable
list, bytearray are multable

str, tuple, dict are immultable

### Tip - Iterator
Write your own iterator based on iterator protocol
[Iterators & Generators](https://anandology.com/python-practice-book/iterators.html)

### Tip - Comprehensions
Thanks Python, comprehension is really easy to understand as it is english.
```
[n ** 2 for n in range(10) if not n % 2]
{c: k for k, c in enumerate(ascii_lowercase, 1)}
```

### Tip - Generator Object
1. [The Python yield keyword explained](https://pythontips.com/2013/09/29/the-python-yield-keyword-explained/)
2. [Generator functions in C++](https://paoloseverini.wordpress.com/2014/06/09/generator-functions-in-c/) is not easy.

### Tip - Instance / Class / Static method
```
if need to acess instance attribute or method:
  use instance method
elif need to access class attribute or method:
  use class method
else:
  use static method
```

### Tip - Others
1. Always use new stype class, otherwise, e.g. property cannot work
2. Always implement \_\_repr\_\_ for your own class

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
6. [CLASS METHOD VS STATIC METHOD 2017](http://www.bogotobogo.com/python/python_differences_between_static_method_and_class_method_instance_method.php)
7. [Interfaces in Python: Protocols and ABCs](http://masnun.rocks/2017/04/15/interfaces-in-python-protocols-and-abcs/)
