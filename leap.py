"""Task

Given a year, determine whether it is a leap year. If it is a leap year, return the Boolean True, otherwise return False.

Note that the code stub provided reads from STDIN and passes arguments to the is_leap function. It is only necessary to complete the is_leap function."""


def leap(year):
  if year % 4 == 0:
    if year % 100 != 0 or year % 400 == 0:
        return True
    else:
        return False
  else:
      return False


year = int(input())
x = leap(year)

if x is True:
    print("Leap Year")
else:
    print("Not an Leap Year")