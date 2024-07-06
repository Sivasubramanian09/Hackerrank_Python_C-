"""HackerRank Logo
|
PreparePythonStringsFind a string
Exit Full Screen View
Problem	Submissions	Leaderboard	Discussions	Editorial
In this challenge, the user enters a string and a substring. You have to print the number of times that the substring occurs in the given string. String traversal will take place from left to right, not from right to left.

NOTE: String letters are case-sensitive."""

if __name__ == '__main__':
    s = input()
    # print("True" if s.isalnum() else "False")
    # print("True" if s.isdigit() else "False")
    # print("True" if s.isalpha() else "False")
    # print("True" if s.islower() else "False")
    # print("True" if s.isupper() else "False")
    print(any(i.isalnum() for i in s))
    print(any(i.isdigit() for i in s))
    print(any(i.isalpha() for i in s))
    print(any(i.islower() for i in s))
    print(any(i.isupper() for i in s))

