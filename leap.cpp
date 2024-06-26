/*Task

Given a year, determine whether it is a leap year. If it is a leap year, return the Boolean True, otherwise return False.

Note that the code stub provided reads from STDIN and passes arguments to the is_leap function. It is only necessary to complete the is_leap function.*/

#include<iostream>

bool leap(int year){
    if(year % 4 == 0){
        if(year % 100 != 0 || year % 400 == 0){
            return true;
        }
        else
            return false;
    }
    else
        return false;
}

int main(){

    int year;
    std::cout<<"Enter the Year:";
    std::cin>>year;
    bool x = leap(year);
    if(x == true){
        std::cout<<"Leap Year"<<std::endl;
    }
    else
        std::cout<<"Not an Leap Year"<<std::endl;
    return 0;
}