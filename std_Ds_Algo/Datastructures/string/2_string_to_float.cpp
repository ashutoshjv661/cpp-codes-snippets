#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long
#define OJ \
	freopen("input.txt", "r", stdin); \
	freopen("output.txt", "w", stdout);
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);


#include<sstream>

int main() 
{	
	// using string stream library to convert string variables to other datatypes 
	string abc;
	float inches = 0;
	float yard = 0;
	cout<<"Enter number of inches ";
	getline(cin,abc);
	stringstream(abc)>>inches;   //dumping string stream into inches and converting it 
	cout<<"In inches "<<inches;
	yard = inches/36;
	cout<<"Yard is "<<yard;
return 0;
   
}