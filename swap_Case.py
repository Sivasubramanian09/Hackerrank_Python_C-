def swap_case(s):
    string = ""
    for i in s:
        if i.islower() == True:
            string += (i.upper())
        else:
            string += (i.lower())

    return string

    #     if i.isupper() == True:

    #         string+=(i.lower())

    #     else:

    #         string+=(i.upper())

    # return string


if __name__ == '__main__':
    s = input()
    result = swap_case(s)
    print(result)