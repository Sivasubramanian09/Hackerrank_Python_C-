n = int(input())
m = []

for i in range(n):
    x = int(input())
    m.append(x)


def findequal(m):
    if m[0] == m[n - 1]:
        return True
    else:
        return False



a = findequal(m)
print(a)

