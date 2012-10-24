#!/usr/bin/env python

import smtplib  
      
fromaddr = 'reciprocity.mail.noreply@gmail.com'  
toaddrs  = 'emayssat@gmail.com'  
msg = 'There was a terrible error that occured and I wanted you to know!'  
      
      
# Credentials (if needed)  
username = 'lynceantech@earthlink.net'  
password = 'yasux72d'  
      
# The actual mail send  
server = smtplib.SMTP('smtpauth.earthlink.net:587')  
server.starttls()  
server.login(username, password)  
server.sendmail(fromaddr, toaddrs, msg)  
server.quit()  
