//This is The Coding Area
// sumited by Ashutosh Jadhav

#include<bits/stdc++.h>
using namespace std;

bool sf(int n)
{
    if (n % 2 == 0)
       n = n/2;
    if (n % 2 == 0)
       return false;
    for (int i=3;i<=sqrt(n); i=i+2)
    {
        if (n%i==0)
        {
           n=n/i;
           if(n%i==0)
               return false;
        }
    }

    return true;
}

int main()
{
  int num,arr[100000],j=0,counter=0;
  scanf("%d",&num);
  for(int i=2;i<=sqrt(num);i++)
    {
        if (num%i == 0)
        {
            if (num/i == i)
               arr[j++]=i;
                    else
                arr[j++]=i;
                arr[j++]=num/i;
        }
    }
    for(int i=0;i<j;i++)
    if(sf(arr[i]))
        counter++;
     cout<<counter;

return 0;

}
