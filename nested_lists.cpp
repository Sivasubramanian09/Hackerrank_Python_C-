/*Given the names and grades for each student in a class of  students,
 store them in a nested list and print the name(s) of any student(s) having the second lowest grade.
Note: If there are multiple students with the second lowest grade, order their names alphabetically and print each name on a new line.*/

#include<iostream>
#include<bits/stdc++.h>
struct scores{
    std::string name;
    float scores;
};


int main(){
          int n;
          std::cin>>n;
          struct scores s[n];
          for (int i=0;i<n;i++){
            std::cin>>s[i].name;
            std::cin>>s[i].scores;
          }
          for (int i=0; i<n;i++){
            std::cout<<s[i].name<<std::endl;
            std::cout<<s[i].scores<<std::endl;
          }

        //   std::set<float> s;

}