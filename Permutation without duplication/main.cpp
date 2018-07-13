#include <bits/stdc++.h>
void per(char *);
void swap(char *,int,int);
int next(char *,char,int,int);

using namespace std;

int main()
{
    char s[10];
    cin>>s;
    per(s);

    return 0;
}
void per(char *s)
{
    int n,i;
    n=strlen(s);
    sort(s,s+n);
    bool isfinished=false;
    while(!isfinished)
    {
        cout<<s<<endl;
        for(i=n-2;i>=0;i--)
            if(s[i]<s[i+1])
                break;
        if(i==-1)
            isfinished=true;
        int nextindex=next(s,s[i],i+1,n);
        swap(s,i,nextindex);
        sort(s+i+1,s+n);
    }
}
void swap(char *s,int a,int b)
{
    char temp=s[a];
    s[a]=s[b];
    s[b]=temp;
}
int next(char *s,char a,int l,int h)
{
    int index=l,i;
    for(i=l;i<h;i++)
        if(s[i]>s[l] && s[i]<s[index])
            index=i;
    return index;
}
