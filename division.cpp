/*Task
The provided code stub reads two integers, a and b , from STDIN.

Add logic to print two lines. The first line should contain the result of integer division, a // b . The second line should contain the result of float division, a /b .

No rounding or formatting is necessary.*/

#include<iostream>
int main(){
    int a,b;
    std::cout<<"Enter the 2 Values:";
    std::cin>>a>>b;
    std::cout<<a/b<<"\n"<<(float)a/b<<"\n";
}