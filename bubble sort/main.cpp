#include <iostream>

using namespace std;

int main()
{
    int i,j,n,a[20],temp;
    cout<<"Enter the number of elements:";
    cin>>n;
    cout<<"Enter the elements:";
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
           if(a[j]>a[j+1])
           {
               temp=a[j];
               a[j]=a[j+1];
               a[j+1]=temp;
           }
        }
    }
    for(i=0;i<n;i++)
        cout<<a[i]<<" ";
    return 0;
}
