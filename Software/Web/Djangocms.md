
[Tutorials](https://django-cms.readthedocs.io/en/latest/introduction/index.html)

Dockerfile
```
 FROM ubuntu:16.04
 FROM python:2.7
 ENV PYTHONUNBUFFERED 1
 RUN mkdir /keyue
 WORKDIR /keyue
 ADD requirements.txt /keyue
 RUN pip install -r requirements.txt
 RUN djangocms -f -p /keyue/mysite mysite
 EXPOSE 3002
```

requirements.txt
```
Django>=1.8
djangocms-installer
```

