#!/bin/bash
# script to send a POST request to a given url.
curl -s -X POST -d "email=test@gmail.com&subject=I will always be here for PLD" "$1"
