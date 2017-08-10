#!/usr/bin/env python

import sys
import re

def new_doc_line(line):
    global in_code_block
    if in_code_block:
        print "```"
        in_code_block = False
    if line is not None:
        print line

def new_code_line(line):
    global in_code_block
    if not in_code_block:
        print "```CPP"
        in_code_block = True
    if line is not None:
        print line,

def match_doc_line(line):
    m = re.match(r'^\s*/{3}\s*(.*)', line)
    if m:
        new_doc_line(m.group(1))
    return m 

def match_doc_block_begin(line):
    global in_doc_block
    m = re.match(r'^\s*/\*{3}\s*(.*)', line)
    if m:
        new_doc_line(m.group(1))
        in_doc_block = True
    return m

def match_doc_block(line):
    m = re.match(r'^\s*\*\s+(.*)', line)
    if m:
        new_doc_line(m.group(1))
    return m

def match_doc_block_end(line):
    m = re.match(r'^\s*\*{3}/\s*(.*)', line)
    in_doc_block = False
    return m

def match_code_block(line):
    new_code_line(line)

in_code_block = False
in_doc_block = False

f = sys.stdin
line = f.readline()
while line:
    if match_doc_line(line):
        line = f.readline()
    elif match_doc_block_begin(line):
        line = f.readline()
        while match_doc_block(line):
            line = f.readline()
        if match_doc_block_end(line):
            line = f.readline()
        else:
            line = f.readline()
    else:
        match_code_block(line)
        line = f.readline()
else:
    new_doc_line(None)

