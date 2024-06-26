/*
Input Format:
The first line contains two space-separated integers denoting the respective values of n (the number of variable-length arrays) and q (the number of queries).
Each line i of the n subsequent lines contains a space-separated sequence in the format k a[i]0 a[i]1 … a[i]k-1 describing the k-element array located at a[i].
Each of the q subsequent lines contains two space-separated integers describing the respective values of i (an index in array a) and j (an index in the array referenced by a[i]) for a query.

Output Format
For each pair of i and j values (i.e., for each query), print a single integer that denotes the 
element located at index j of the array referenced by a[i]. 
There should be a total of  lines of output.*/

#include<iostream>
int main(){
    int n, q;
    std::cin>>n>>q;
    int *arr[n];
    for(int i=0;i<n;i++){
        int temp;
        std::cin>>temp;
        arr[i] = new int[temp*sizeof(int)];
        for(int j=0;j<temp;j++){
                std::cin>>arr[i][j];
            }
    }
    for(int a=0; a<q;a++){
        int i,j;
        std::cin>>i>>j;
        std::cout<<arr[i][j];
    }    
    return 0;
}