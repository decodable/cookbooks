#!/usr/local/bin/python

# -*- coding: utf-8 -*-
import re
import sys
from django.conf import settings
from django.core.management import execute_from_command_line

class MyWSGIHandler(object):
  def __init__(self):
    pass

  def __call__(self, environ, start_response):
    status = '200 OK'
    headers = [('Content-type', 'text/plain')]
    start_response(status, headers)

    return ["Hello World"]

application = MyWSGIHandler()

if __name__ == '__main__':
  settings.configure(DEBUG=True, WSGI_APPLICATION='test.application')
  
  sys.argv[0] = re.sub(r'(-script\.pyw?|\.exe)?$', '', sys.argv[0])
  sys.exit(execute_from_command_line())
