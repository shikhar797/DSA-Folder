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
node *insert(node *head,int pos,int key){
    node *curr=head;
    node *temp=new node(key);
    if(pos==1){
        temp->next=head;
        return temp;
    }
    while(pos-2&&curr->next!=NULL){
        curr=curr->next;
    }
    if(curr->next==NULL){
        return head;
    }
    node *temp2=NULL;
    temp2=curr->next;
    curr->next=temp;
    temp->next=temp2;
    
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
    head=insert(head,5,15);
    print(head);
return 0;
}