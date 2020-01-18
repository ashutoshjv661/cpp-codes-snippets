#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long
#define OJ \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);


int main() 
{ 
	//Used for C I guess ^_^
    
	char str[] = "Geeks-for-Geeks"; 
	// Returns first token 
	char *token = strtok(str, "-");
	// Keep printing tokens while one of the 
	// delimiters present in str[]. 
	while (token != NULL) 
	{ 
		printf("%s\n", token); 
		token = strtok(NULL, "-"); 
	} 

return 0;
   

}


// Tokenizing a string using stringstream 
#include <bits/stdc++.h> 

using namespace std; 

int main() 
{ 
	
	string line = "GeeksForGeeks-is-a-must-try"; 
	
	// Vector of string to save tokens 
	vector <string> tokens; 
	
	// stringstream class check1 
	stringstream check1(line); 
	
	string intermediate; 
	
	// Tokenizing w.r.t. space ' ' 
	while(getline(check1, intermediate, '-')) 
	{ 
		tokens.push_back(intermediate); 
	} 
	
	// Printing the token vector 
	for(int i = 0; i < tokens.size(); i++) 
		cout << tokens[i] << '\n'; 
} 

