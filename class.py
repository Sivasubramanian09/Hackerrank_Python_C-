"""You have to create a class, named Student, representing the student's details, as mentioned above, and store the data of a student. Create setter and getter functions for each element; that is, the class should at least have following functions:

get_age, set_age
get_first_name, set_first_name
get_last_name, set_last_name
get_standard, set_standard
Also, you have to create another method to_string() which returns the string consisting of the above elements, separated by a comma(,). You can refer to stringstream for this.

Input Format

Input will consist of four lines.
The first line will contain an integer, representing the age. The second line will contain a string, consisting of lower-case Latin characters ('a'-'z'), representing the first_name of a student.
The third line will contain another string, consisting of lower-case Latin characters ('a'-'z'), representing the last_name of a student.
The fourth line will contain an integer, representing the standard of student.

Note: The number of characters in first_name and last_name will not exceed 50.

Output Format

The code provided by HackerRank will use your class members to set and then get the elements of the Student class."""


class Student:
    def __init__(self):
        self.age = 0
        self.standard = None
        self.first_name = None
        self.last_name = None


    def set_age(self, age):
        self.age = age

    def set_standard(self,standard):
        self.standard = standard

    def set_first_name(self,first_name):
        self.first_name = first_name

    def set_last_name(self,last_name):
        self.last_name = last_name

    def get_age(self):
        return self.age

    def get_standard(self):
        return self.standard

    def get_first_name(self):
        return self.first_name

    def get_last_name(self):
        return self.last_name

    def to_string(self):
        print(f"{age},{last_name},{first_name},{standard}")



age = int(input())
standard = int(input())
first_name = input()
last_name = input()

s1 = Student()
s1.set_age(age)
s1.set_standard(standard)
s1.set_first_name(first_name)
s1.set_last_name(last_name)
print(s1.get_age())
print(s1.get_standard())
print(s1.get_first_name())
print(s1.get_last_name())
s1.to_string()









