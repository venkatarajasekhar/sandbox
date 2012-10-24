#!/usr/bin/env python


def create_mailing_list():
    return requests.post(
        "https://api.mailgun.net/v2/lists",
        auth=('api', 'key-3ax6xnjp29jd6fds4gc373sgvjxteol0'),
        data={'address': 'dev@samples.mailgun.org',
              'description': "Mailgun developers list"})


def add_list_member():
    return requests.post(
        "https://api.mailgun.net/v2/lists/dev@samples.mailgun.org/members",
        auth=('api', 'key-3ax6xnjp29jd6fds4gc373sgvjxteol0'),
        data={'subscribed': True,
              'address': 'bob@gmail.com',
              'name': 'Bob Bar',
              'description': 'Developer',
              'vars': '{"age": 26}'})
