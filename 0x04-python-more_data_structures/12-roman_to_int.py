#!/usr/bin/python3
def roman_to_int(roman_string):
    if not isinstance(roman_string, str) or roman_string is None:
        return 0

    roman_numerals = {
            'I': 1,
            'V': 5,
            'X': 10,
            'L': 50,
            'C': 100,
            'D': 500,
            'M': 1000
            }
    result = 0
    prev = 0

    for i in range(len(roman_string) - 1, -1, -1):
        current = roman_numerals.get(roman_string[i], 0)

        if current >= prev:
            result += current
        else:
            result -= current

        prev = current

    return result
