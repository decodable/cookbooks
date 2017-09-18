
```
virtualenv demo
cd demo
source bin/activate

pip install django
pip install requests

django-admin startproject mysite
cd mysite
python manage.py --version
python manage.py startapp myapp

python manage.py migrate

# test
python manage.py test
pip install coverage
coverage run manage.py test -v 2
coverage html

# run
python manage.py runserver 0:3000

# asynchronous tasks

# Admin
python manage.py createsuperuser
```


1. [First Steps with Celery](http://docs.celeryproject.org/en/latest/getting-started/first-steps-with-celery.html)
2. [Asynchronous Tasks With Django and Celery](https://realpython.com/blog/python/asynchronous-tasks-with-django-and-celery/)
3. [Testing in Django](https://realpython.com/blog/python/testing-in-django-part-1-best-practices-and-examples/)
4. [How to debug in Django, the good way?](https://stackoverflow.com/questions/1118183/how-to-debug-in-django-the-good-way)
5. [How to Use Django's Built-in Login System](https://simpleisbetterthancomplex.com/tutorial/2016/06/27/how-to-use-djangos-built-in-login-system.html)
