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
node *DeleteAtEnd(node *head){
    if(head->next==NULL||head==NULL) return NULL;
    node *curr=head;
    while(curr->next->next!=NULL){
        curr=curr->next;
    }
    node *temp=NULL;
    delete curr->next;
    curr->next=temp;
    return head;
}
void print(node *head){
    if(head==NULL) return;
    cout<<head->data<<" ";
    print(head->next);
}
int main(){
    node *head=new node(10);
    head->next=new node(20);
    head->next->next=new node(30);
    head=DeleteAtEnd(head);
    print(head);
return 0;
}