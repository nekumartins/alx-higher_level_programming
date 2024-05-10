#!/usr/bin/python3
"""script to:
- send a request to a url
- display the body of the response (decoded in utf-8).
"""


if __name__ == "__main__":
    import sys
    from urllib import request, error

    try:
        with request.urlopen(sys.argv[1]) as res:
            print(res.read().decode('UTF-8'))
    except error.HTTPError as e:
        print('Error code:', e.code)
