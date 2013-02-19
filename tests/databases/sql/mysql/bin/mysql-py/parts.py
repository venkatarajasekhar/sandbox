#!/usr/bin/env python

import MySQLdb 


conn = MySQLdb.connect (host = "localhost",
                           user = "root",
                           passwd = "ayaH0s0b",
                           db = "parts")

cursor = conn.cursor()
cursor.execute("SELECT * FROM parts")
rows = cursor.fetchall()

print "id|class|part_number|description|vendor|vendor_part_number|username|status|note|datasheet"
for row in rows :
    #print row
    id,class_id,part_number,description,vendor_id,vendor_part_number,username,datum,status,note,datasheet_id = row 
    cursor.execute("SELECT * FROM class WHERE id=%d" % class_id)
    classEntry = cursor.fetchone()
    className = classEntry[1] 
    if vendor_id != 0 :
        cursor.execute("SELECT * FROM vendor WHERE id=%d" % vendor_id)
        vendorEntry = cursor.fetchone()
        vendorName = vendorEntry[1] 
    else:
        vendorName = ''
    cursor.execute("SELECT * FROM datasheet WHERE id=%d" % datasheet_id)
    datasheetEntry = cursor.fetchone()
    datasheetName = datasheetEntry[1] 
    s = "%s|%s (%d)|" % ( id,className, class_id)
    s+= "%d-%06d|%s|" % ( class_id,part_number,description)
    s+= "%s|%s|" % ( vendorName, vendor_part_number)
    s+= "%s|%s|" % ( username,status)
    s+= "%s|%s|" % ( note,datasheetName)
    print s

#print "server version:", row[0]
cursor.close ()
conn.close ()


