#include <bits/stdc++.h>
using namespace std;
struct node {
    node *next;
    int data;
    node(int x){
        data=x;
        next=NULL;
    }
};
// void print(node *head){
//     if(head==NULL) return;
//     cout<<head->data<<" ";
//     node *curr=head->next;
//     while(curr!=head){
//         cout<<curr->data<<" ";
//         curr=curr->next;
//     }
// }
void print(node *head){
    if(head==NULL) return;
    node *curr=head;
    do
    {
        cout<<curr->data<<" ";
        curr=curr->next;
    } while (curr!=head);
    
}

int main(){
    node *head=new node(10);
    head->next=new node(20);
    head->next->next=new node(30);
    head->next->next->next=head;
    
    // while(curr->next!=head){
    //     cout<<curr->data<<" ";       this will not handle the case for 1 node circular linked list
    //     curr=curr->next;
    // }
    // cout<<curr->data;
    print(head);

return 0;
}