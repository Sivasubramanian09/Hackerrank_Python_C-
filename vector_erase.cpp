#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    cin>>n;
    vector<int> vec;
    for (int i=0; i<n;i++){
        int temp;
        cin>>temp;
        vec.push_back(temp);
    }
    int a,b,c;
    cin>>a>>b>>c;
    vec.erase(vec.begin()+a-1);
    vec.erase(vec.begin()+b-1,vec.begin()+c-1);
    cout<<vec.size()<<endl;
    for(int i=0; i<vec.size();i++){
        cout<<vec[i]<<" ";
    }
    return 0;
}