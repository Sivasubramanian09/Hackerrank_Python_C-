/*Given the participants' score sheet for your University Sports Day,
you are required to find the runner-up score. You are given n scores.
Store them in a list and find the score of the runner-up.*/


#include<iostream>
#include <bits/stdc++.h> 


// Simple C++ program to remove duplicates 
// #include <iostream> 
using namespace std; 

int find_runner(int arr[], int n) {
    int temp[n];
    int k=0;
    for (int i =0; i<n-1;i++){
        for(int j=i;j<n;j++){
            if(arr[i] != arr[j]){  
                    if (j = n-1){
                        temp[k++] = arr[i];
             } 
           }
        }
    }
    temp[k++] = arr[n-1];
    std::cout<<k<<endl;
    // for (int i=0;i<n;i++){
    //     std::cout<<temp[i];
    // }

    int first= temp[0], second = temp[0];
    for (int i=1;i<k;i++){
        if(first < temp[i]){
                first = temp[i];
        }
    }
    for (int i =1; i<k;i++){
        if(second < temp[i] && temp[i] < first){
            second = temp[i];
        }
    }
    return second;
}

// Driver code 
int main() 
{ 
	int n;
    std::cin>>n;
    int arr[n]; 
    for(int i=0;i<n;i++){
        std::cin>>arr[i];
    }
     
	// RemoveDuplicates() returns 
	// new size of array. 
	int x = find_runner(arr, n); 

    std::cout<<x;
	return 0; 
} 

// This code is contributed by Aditya Kumar (adityakumar129)


// int main(){
//     int n;
//     std::cin>>n;
//     int arr[n];
//     std::set<int> s;
//     std::set<int>::iterator it;
//     for (int i =0; i<n;i++){
//         std::cin>>arr[i];
//     }
    
//     for (int i=0;i<n;i++){
//         s.insert(arr[i]);
//     }
//     for (it =s.begin(); it != s.end();it++){
//         std::cout<<*it;
//     }

    

//     // *it now refers to the second-to-last value


//     return 0;
// }


