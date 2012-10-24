#!/usr/bin/env python

import smtplib 
import account as a

sender = 'reciprocity.ring@gmail.com'
receivers = ['emayssat@gmail.com']

mime_message_body1 = """From: Reciprocity Ring <reciprocity.ring@gmail.com>
To: To Person <emayssat@mail.com>
Subject: SMTP e-mail test

This is a test e-mail message.
"""  

mime_message_body2 = """From: Reciprocity Ring <reciproctiy.ring@gmail.com>
To: Emmanuel Mayssat <emayssat@gmail.com>
MIME-Version: 1.0
Content-type: text/html
Subject: SMTP HTML e-mail test

This is an e-mail message to be sent in HTML format

<b>This is HTML message.</b>
<h1>This is headline.</h1>
"""

def send_message_via_smtp(mime_message_body):
    try:
        smtpObj = smtplib.SMTP("smtp.mailgun.org", 587)
        smtpObj.login(a.username, a.password)                       # login, password
        smtpObj.sendmail(sender, receivers, mime_message_body)
        smtpObj.quit()
    except smtplib.SMTPException:
        print "Error: unable to send email"

send_message_via_smtp(mime_message_body1)
send_message_via_smtp(mime_message_body2)
