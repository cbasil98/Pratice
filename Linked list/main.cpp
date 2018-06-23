#include <bits/stdc++.h>

using namespace std;
struct node
{
    int data;
    node *next;
};
class link
{
private:
    node *head,*tail;
    link()
    {
        head=null;
        tail=null;
    }
};
void createnode(int data)
{
    node *temp=new node;
    temp->data=data;
    if(head==null)
    {
        head=temp;
        tail=temp;
        temp=null;
    }
    else
    {
        tail->next=temp;
        temp=null;
    }

}
void display()
{
    nod *temp=new node;
    temp=head;
    for(temp->next!=null)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }

}
void insertion(int data,int pos)
{
    node *temp=new node;
    node *prev=new node;
    node *cur=new node;
    temp->data=data;
    cur=head;
    for(i=1;i<pos;i++)
    {
        prev=cur;
        cur=cur->next;

    }
    prev->next=temp;
    temp->next=cur;
}
void insertionlast(int data)
{
    node *temp=new node;
    temp=head;
    temp->data
}
void deleteLast(int pos)
{
    node *prev=new node;
    node *cur=new node;
    cur=head;
    while(cur->next!=null)
    {
        prev=cur;
        cur=cur->next;
    }
    delete cur;
    prev->next=null;

}
int main()
{
    link *a;
    a=new(link);
    return 0;
}
