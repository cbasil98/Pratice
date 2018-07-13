#include <iostream>

using namespace std;

int main()
{
    int i,j,n,a[20],small,pos,temp;
    cout << "Enter the number of elements:";
    cin>>n;
    cout<<"Enter the elements:";
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n;i++)
    {
        small=a[i];
        pos=i;
        for(j=i;j<n;j++)
        {
            if(a[j]<small)
            {
                small=a[j];
                pos=j;
            }
        }
        if(pos!=i)
        {
            temp=a[pos];
            a[pos]=a[i];
            a[i]=temp;
        }
    }
    for(i=0;i<n;i++)
        cout<<a[i]<<" ";

    return 0;
}
