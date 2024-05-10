#!/bin/bash
# script to display all HTTP methods the server of a given url will accept.
curl -sI "$1" | grep "Allow" | cut -d " " -f 2-
