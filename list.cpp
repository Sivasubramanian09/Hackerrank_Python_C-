/*Let's learn about list comprehensions! You are given three integers x,y  and z representing the dimensions of a cuboid along with an integer n.
Print a list of all possible coordinates given by (i,j,k) on a 3D grid where the sum of i+j+k is not equal to n.
Here,0<=i<=x;0<=j<=y;0<=k<=z;.Please use list comprehensions rather than multiple loops, as a learning exercise.*/


#include<iostream>
#include<vector>

int main(){

    int x,y,z,n,count=0;
    // std::vector<int> arr;
//     arr[0].push_back(4);
//     arr[0].push_back(2);
//     // arr[1] = 2,3,4,4;
//     for (int i =0; i<1;i++){
//         for (int j=0;j<2;j++){
//         std::cout<< arr[i][j];
//     }
//   }
// }
    int arr1[x],arr2[y],arr3[z];
    std::cin>>x>>y>>z>>n;
    for (int i =0; i<x;i++){
        arr1[i] = i;
    }
    for (int j = 0;j<y;j++){
        arr2[j] = j;
    }
    for(int k=0;k<z;k++){
        arr3[k] = k;
    }
                // int z = i+j+k;
                // if(z != n){
                //         count++;
    for (int i =0;i<x;i++){
     std::cout<<arr1[i];
    }
}