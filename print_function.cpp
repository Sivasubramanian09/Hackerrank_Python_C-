/*The included code stub will read an integer,n , from STDIN.
Without using any string methods, try to print the following:
123...n
Note that "..." represents the consecutive values in between.*/


#include<iostream>
int main(){
    int n;
    std::cout<<"Enter the Number: ";
    std::cin>>n;
    for (int i =1; i<=n;i++){
        std::cout<<i;
    }
    std::cout<<"\n";
}