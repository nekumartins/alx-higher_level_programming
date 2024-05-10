#!/bin/bash
# script to send a GET request to a given url and display the response status code.
curl -s -o /dev/null -w "%{http_code}" "$1"
