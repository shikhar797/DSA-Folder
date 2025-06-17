#include <bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node *next;
    node(int x){
        data=x;
        next=NULL;
    }
};
node *del(node *head){
    if(head->next==NULL||head==NULL) return NULL;
    node *temp=head->next;
    delete head;                   //here delete is used for memory de allocation
    return temp;
}
int main(){
    node *head=new node(10);
    head->next=new node(25);
    head->next->next=new node(30);
    head=del(head);
    cout<<head->data;
return 0;
}