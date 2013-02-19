#!/usr/bin/env python

import MySQLdb 


conn = MySQLdb.connect (host = "localhost",
                           user = "root",
                           passwd = "ayaH0s0b",
                           db = "documents")

cursor = conn.cursor()

tables = [ 'bd','ca','ea','ed','ei','es','fm','gf','mm','mo','pa','pr','ps','si','sp','tn','tp','wd','wi','wl' ]

print "id|description|username|status"

for table in tables :
    print ""
    cursor.execute("SELECT * FROM %s" % table)
    rows = cursor.fetchall()

    for row in rows :
        #print row
        id,description,datum,username,status = row 
        s = "%s|%s|%s|" % ( table, id,description)
        s+= "%s|%s|" % ( username,status)
        print s

#print "server version:", row[0]
cursor.close ()
conn.close ()


