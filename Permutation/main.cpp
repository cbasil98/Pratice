#include <bits/stdc++.h>
void per(char *,int,int);
void swap(char *,char *);
using namespace std;

int main()
{
    char s[10];
    int n;
    cin>>s;
    n=strlen(s);
    per(s,0,n-1);

    return 0;
}

void per(char *s,int l,int r)
{
    if(l==r)
        cout<<s;
    else
    {
        for(int i=l;i<=r;i++)
        {
            swap(s+l,s+i);
            per(s,l+1,r);
            swap(s+1,s+i);
        }
    }

}
void swap(char *x,char *y)
{
    char temp;
    temp= *x;
    *x=*y;
    *y=temp;
}
