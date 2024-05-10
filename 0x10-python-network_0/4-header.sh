#!/bin/bash
# Script to take in a url as an argument and send a GET request to the url then displays the body of the response
curl "$1" -sX GET -H "X-School-User-Id: 98"
