// // C++ program for the above approach 

#include <iostream> 
// using namespace std; 

// Function to check the character 
// is an alphabet or not 
int isChar(char c) { 
	if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >=0 && c<=9)){
        return 1;
    }
    return 0; 
} 

// Function to check email id is 
// valid or not  
bool is_valid(std::string email){
    int at=-1, Dot = -1; 
    for(int i =0; i<email.length();i++){
        if (email[i] == '@') { 
            at = i;
            while(email[i] != '.'){
                i++;
            }
            Dot = i;
        }
    
    // std::cout<<at<<Dot;
    }
	// If At or Dot is not present 
	if (at == -1 || Dot == -1) 
		return 0; 
    else{
        int i =0;
        while(isChar(email[i]))
        {
            i++;
            if(email[--i] == '\0')
                break;
        }
        return 1;
    }
} 

// Driver Code 
int main() 
{ 
    int n;
    std::cin>>n;
	std::string email[n]; 
    for(int i =0;i<n;i++){
        std::cin>>email[i];
    }

	//Function Call 
    for(int i =0;i<n;i++){
	  bool ans = is_valid(email[i]); 
      if (ans) { 
		std::cout << email[i]<< std::endl; 
    	} 
    }

	return 0; 
} 
