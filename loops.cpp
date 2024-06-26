/*Task
The provided code stub reads and integer,n, from STDIN. For all non-negative integers i<n, print i^2.*/

#include<iostream>
int main(){

    int n;
    std::cout<<"Enter the integer n:";
    std::cin>>n;
    for (int i =0; i<n;i++){
        std::cout<<i*i<<"\n";
    }
   return 0;
}