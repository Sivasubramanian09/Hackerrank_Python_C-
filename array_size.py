"""
Input Format:
The first line contains two space-separated integers denoting the respective values of n (the number of variable-length arrays) and q (the number of queries).
Each line i of the n subsequent lines contains a space-separated sequence in the format k a[i]0 a[i]1 … a[i]k-1 describing the k-element array located at a[i].
Each of the q subsequent lines contains two space-separated integers describing the respective values of i (an index in array a) and j (an index in the array referenced by a[i]) for a query.

Output Format
For each pair of i and j values (i.e., for each query), print a single integer that denotes the
element located at index j of the array referenced by a[i].
There should be a total of  lines of output."""
from array import array

n = int(input())
q = int(input())
a = []
for i in range(n):
    b = []
    k = int(input())
    for j in range(k):
        b.append(int(input()))
    a.append(b)

for i in range(q):
    x = int(input())
    y = int(input())
    print(a[x][y])


