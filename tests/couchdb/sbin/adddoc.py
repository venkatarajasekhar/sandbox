#!/usr/bin/python

import couchdb

couch = couchdb.Server()
db = couch.create('test')



