#include<bits/stdc++.h>
using namespace std;

class SortedStack{
public:
	stack<int> s;
	void sort();
};

void printStack(stack<int> s)
{
    while (!s.empty())
    {
        printf("%d ", s.top());
       	s.pop();
    }
    printf("\n");
}

int main()
{
int t;
cin>>t;
while(t--)
{
	SortedStack *ss = new SortedStack();
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	int k;
	cin>>k;
	ss->s.push(k);
	}
	ss->sort();
	printStack(ss->s);
}
}// } Driver Code Ends
/*The structure of the class is
class SortedStack{
public:
	stack<int> s;
	void sort();
};
*/

/* The below method sorts the stack s 
you are required to complete the below method */
void SortedStack :: sort()
{
		if(s.empty()) {
		    return;
		}
		
		stack<int> s1;
		int topS = 0;
		while (!s.empty()) {
		    topS = s.top();
		    s.pop();
		    while(!s1.empty() && topS < s1.top()) {
		            s.push(s1.top());
		            s1.pop();
		    }
		    s1.push(topS);
		}
		swap(s1,s);
}