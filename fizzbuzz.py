#!/usr/bin/python

count = 0
while (count <= 100):
    fizz = 'fizz' if count % 3 == 0 else ''
    buzz = 'buzz' if count % 5 == 0 else ''
    print count,' ',fizz,buzz
    count = count + 1
