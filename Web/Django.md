
```
virtualenv demo
cd demo
source bin/activate

pip install django
pip install requests

django-admin startproject mysite
cd mysite
python manage.py startapp myapp

python manage.py migrate
```
