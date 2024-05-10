#!/bin/bash
# script to get the byte size of the HTTP response header for a given url.
curl -s "$1" | wc -c
