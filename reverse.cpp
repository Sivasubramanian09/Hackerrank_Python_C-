/*Print the N integers of the array in the reverse order, space-separated on a single line.*/

#include<iostream>
int main(){
    int n;
    std::cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        std::cin>>arr[i];
    }
    for(int i=0;i<n/2;i++){
        int temp;
        temp = arr[i];
        // std::cout<<temp;
        arr[i] = arr[n-i-1];
        // std::cout<<arr[i];
        arr[n-i-1] = temp;
        // std::cout<<arr[n-i-1];
    }

    for(int i=0; i<n;i++){
        std::cout<<arr[i]<<" ";
    }
    return 0;
}