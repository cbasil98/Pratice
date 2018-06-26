#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[20],n,i,high,low,mid,x;
   cout<<"Enter the number of elements:\n";
   cin>>n;
   cout<<"Enter the elements:\n";
   for(i=0;i<n;i++)
        cin>>a[i];
    cout<<"Enter the number to find:";
    cin>>x;
    low=0;
    high=n-1;
   while(high>=low)
   {
       mid=(high+low)/2;
       if(a[mid]==x)
       {
           cout<<"Position:"<<mid;
           exit(0);
       }
       else if(a[mid]<x)
       {
           low=mid+1;

       }
       else
       {
           high=mid-1;

       }

   }
   cout<<"Unable to find"<<x;
    return 0;
}
