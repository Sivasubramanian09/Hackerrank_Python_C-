N = int(input())
x = []
for i in range(N):
    s = input().split()
    if s[0] == "insert":
        x.insert(int(s[1]),int(s[2]))
    elif s[0] == "append":
        x.append(int(s[1]))
    elif s[0] == "remove":
        x.remove(int(s[1]))
    elif s[0] == "pop":
        x.pop()
    elif s[0] == "sort":
        x.sort()
    elif s[0] == "reverse":
        x.reverse()
    else:
        print(x)