"""Given the names and grades for each student in a class of  students,
 store them in a nested list and print the name(s) of any student(s) having the second lowest grade.
Note: If there are multiple students with the second lowest grade, order their names alphabetically and print each name on a new line."""

from collections import OrderedDict

num = []
arr = []
for _ in range(int(input())):
    name = input()
    score = float(input())
    arr.append([name, score])
    num.append(score)

num.sort()
print(num)
second_min = 0
mini = num[0]
arr.sort()
print(arr)
for i in num:
    print(i)
    if i != mini:
        second_min = i
        print(second_min)
        break
# #
for i in arr:
    if i[1] == second_min:
        print(i[0])

# a.sort()
# print(a)

#Converting to Dictionary
# res_dict = {}
# for i in range(0,len(b),2):
#     res_dict[b[i]] = b[i+1]
#
# print(res_dict)
#

#OrderedDictionary

# dict1 = OrderedDict(sorted(res_dict.items()))
# print(dict1)


#Using Sorted
# sorted_dict = {}
# for key in sorted(res_dict, key= res_dict.get):
#     sorted_dict[key] = res_dict[key]
#
# print(sorted_dict)




#converting to list
# a = list(res_dict.values())
# a.sort()
# print(a)


#
# if i in res_dict.values():

#Sorting using for loop
# for i in range(len(res_dict)):
#     for j in range(len(res_dict)-i-1):
#         if (res_dict[j][1] > res_dict[j+1][1]):
#             temp = a[j+1]
#             a[j+1] = a[j]
#             a[j] = temp





