#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    std::vector<int> vec;
    int n;
    cin>>n;
    for (int i=0;i<n;i++){
        int temp;
        cin>>temp;
        vec.push_back(temp);

    }
    sort(vec.begin(), vec.end());
    for (int i=0; i<n;i++){
        cout<<vec[i];
    }
    return 0;
}