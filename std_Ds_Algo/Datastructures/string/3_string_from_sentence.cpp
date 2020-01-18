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
	OJ;
	FIO;
	// extracting strings from a sentence
    string s,abc;
	getline(cin,s);
	stringstream a(s);
	while(a>>abc){
		cout <<abc<<endl;
	}
return 0;
   
}