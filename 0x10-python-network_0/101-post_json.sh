#!/bin/bash
# script to send a JSON POST request to a given url with a given JSON file.
curl -s -H "Content-Type: application/json" -d "$(cat "$2")" "$1"
