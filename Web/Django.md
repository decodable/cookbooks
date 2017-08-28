
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

# asynchronous tasks
pip install -U "celery[redis]"
```


1. [First Steps with Celery](http://docs.celeryproject.org/en/latest/getting-started/first-steps-with-celery.html)
2. [Asynchronous Tasks With Django and Celery](https://realpython.com/blog/python/asynchronous-tasks-with-django-and-celery/)
