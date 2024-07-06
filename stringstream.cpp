/*In this challenge, we work with string streams.
stringstream is a stream class to operate on strings. It implements input/output operations on memory (string) based streams. stringstream can be helpful in different type of parsing. 
The following operators/functions are commonly used here
Operator >> Extracts formatted data.
Operator << Inserts formatted data.
Method str() Gets the contents of underlying string device object.
Method str(string) Sets the contents of underlying string device object.
Its header file is sstream.One common use of this class is to parse comma-separated integers from a string (e.g., "23,4,56").
Function Description:
Complete the parseInts function in the editor below.
parseInts has the following parameters:
string str: a string of comma separated integers
Returns:
vector<int>: a vector of the parsed integers.
Note You can learn to push elements onto a vector by solving the first problem in the STL chapter.*/


#include<iostream>
#include<sstream>
#include<vector>

std::vector<int> parseInt(std::string s){

    std::stringstream ss(s);
    std::vector<int> vec;
    std::string y;
    while(getline(ss,y,',')){
        vec.push_back(std::stoi(y));
    }
    return vec;
}

int main(){
    std::string s;
    std::cin>>s;
    std::vector<int> x = parseInt(s);
    for (int i=0; i < x.size(); i++){
        std::cout<<x[i]<<std::endl;
    }
    return 0;
}