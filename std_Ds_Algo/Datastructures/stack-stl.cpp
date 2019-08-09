/*******************************************
 * @ashutoshjv661
 *******************************************/
#include<bits/stdc++.h>
using namespace std;

void printstack(stack<int> &s){
    while(!(s).empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
}
int main() 
{
    stack<int> s;
    s.push(12);

    int a=s.top();//returns the top element
    cout<<a<<"\n";
    //s.pop();//does not return any value
    s.pop();
    int sizeofstack=s.size();// returns size of stack
    s.empty();//to check if stack empty of not
    s.emplace(14);//pushing directly to the stack
    stack<int> s2;
    s2.push(28);
    s.swap(s2); // swap elements in the stack but stack size must be of same 
    printstack(s);
    return 0;  
}