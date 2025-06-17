#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *next;
    node(int x){
        data=x;
        next=NULL;
    }
};
node *insertAtBegin(node *head,int key)
{
    node *temp=head;
    node *temp2=new node(key);
    temp2->next=temp;
    return temp2;
}
int main()
{
    node *head=NULL;
    head=insertAtBegin(head,20);
    head=insertAtBegin(head,20);
    head=insertAtBegin(head,30);
    head=insertAtBegin(head,40);
    cout<<head->data;
return 0;
}