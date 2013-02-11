

from pysqlite2 import dbapi2 as sqlite

connection = sqlite.connect('sqlite.db')
#memoryConnection = sqlite.connect(':memory:')


cursor = connection.cursor()

cursor.execute('CREATE TABLE names (id INTEGER PRIMARY KEY, name VARCHAR(50), email VARCHAR(50))')

cursor.execute('INSERT INTO names VALUES (null, "John Doe", "jdoe@jdoe.zz")')
cursor.execute('INSERT INTO names VALUES (null, "Mary Sue", "msue@msue.yy")')

print cursor.lastrowid


name = "Luke Skywalker"
email ="use@the.force"

# Input questionable values 
cursor.execute('INSERT INTO names VALUES (null, ?, ?)', (name, email))

connection.commit()

#rollback to last commit
cursor.execute('INSERT INTO names VALUES (null, "Bobby John", "bobby@john.qq")')
connection.rollback()


#Retrieve data
cursor.execute('SELECT * FROM names')
print cursor.fetchall()

cursor.execute('SELECT * FROM names')
for row in cursor:
    print '-'*10
    print 'ID:', row[0]
    print 'Name:', row[1]
    print 'E-Mail:', row[2]
    print '-'*10    

cursor.execute('SELECT * FROM names')
print cursor.fetchmany(2)
print '-----'
print cursor.fetchmany()


cursor.execute('SELECT * FROM names')
print cursor.fetchone()

cursor.execute('SELECT * FROM names')

try:
    print cursor.next()
    print "---"
    print cursor.next()
    print "---"
    print cursor.next()
    print "---"
    print cursor.next()
except StopIteration as e:
    print e
finally:
    cursor.close()
    connection.close()


