#!/usr/bin/python3
"""
script to send a POST request to the
passed url with the email as a parameter, and finally displays the body
of the response.
Usage: ./6-post_email.py <url> <email>
  - Displays the body of the response.
"""
import requests
from sys import argv


if __name__ == "__main__":
    url = argv[1]
    value = {"email": argv[2]}
    req = requests.post(url, data=value)

    print(req.text)
