"""Given the participants' score sheet for your University Sports Day,
you are required to find the runner-up score. You are given n scores.
Store them in a list and find the score of the runner-up."""

x = int(input())
arr = map(int,input().split())
res = list(arr)
res.sort()
res = list(set(res))
print(res[-2])