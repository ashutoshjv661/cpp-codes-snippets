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
    // Basic string functions ^_^ Life savers 
// Input functions
string str;

getline(cin,str); // we can read 

str.push_back('s'); // charater can be pushed back as container

str.pop_back(); // pop from behind



// capacity functions 
cout<<str.capacity(); // capacity can be >= str.size() extra space for inserting

str.resize(20); // resize to size provided

str.length();// charector length

str.shrink_to_fit(); // decreases capacity to str.size()


// All iterators works as they do containers

reverse(str.begin(),str.end()); // reverse in place 

string temp(str.size(),0); //create string of size 

reverse_copy(str.begin(),str.end(),temp.begin()); //reverse and copy to temp 

// rbegin() and rend() are reverse iterators 


// manipulating string 
char ar[13];
str.copy(ar,5,0); // copy string to charector array
// copy(copyto, size , startIndex)

str.swap(temp);
//swapping two strings.




// substring in c++
// string substr (size_t pos, size_t len) const;
// Parameters:
// pos: Position of the first character to be copied.
// len: Length of the sub-string.
// size_t: It is an unsigned integral type.

// Return value: It returns a string object.
// Take any string 
    string s1 = "Geeks"; 
    // Copy three characters of s1 (starting  
    // from position 1) 
    string r = s1.substr(1, 3); 
    // prints the result 
    cout << "String is: " << r; 
// eek



//How to get sub-string after a character? 
// Take any string 
    string s = "dog:cat"; 
  
    // Find position of ':' using find() 
    int pos = s.find(":"); 
  
    // Copy substring after pos 
    string sub = s.substr(pos + 1); 
  
    // prints the result 
    cout << "String is: " << sub;
//    cat


return 0;
   
}