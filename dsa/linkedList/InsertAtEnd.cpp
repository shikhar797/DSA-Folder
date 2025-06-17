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
node *InserAtEnd(node *head,int key){
    node *curr=head;
    node *temp=new node(key);
    while(curr->next!=NULL){
        curr=curr->next;
    }
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
    head=InserAtEnd(head,30);
return 0;
}