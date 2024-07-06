"""Create a class named  with the following specifications:

An instance variable named  to hold a student's  exam scores.
A void input() function that reads  integers and saves them to .
An int calculateTotalScore() function that returns the sum of the student's scores.
Input Format

Most of the input is handled for you by the locked code in the editor.

In the void Student::input() function, you must read  scores from stdin and save them to your  instance variable."""

class Student:
    def __init__(self):
        scores = []

    def input(self):
        for i in range(5):
            self.scores[i] = (int(input())

    def calculateTotalScore():
        sum = 0;
        for i in range(5):
            sum = sum+scores[i]



