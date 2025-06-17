#include <bits/stdc++.h>
using namespace std;
struct node{
    int val;
    node *next;
    node(int x){
        val=x;
        next=NULL;
    }
};
// void traversal(node *head){
//     if(head==NULL) return;
//     cout<<head->val<<" ";
//     traversal(head->next);
// }
void traversal(node *head){
    while (head!=NULL)
    {
        cout<<head->val<<" ";
        head=head->next;
    }
    
}
// void search(node *head,int key){
//     if(head==NULL) cout<<" key not found";
//     else if(head->val==key){

//         cout<<"key found";
//         return;
//     } 
//     search(head->next,key);
// }
void search(node *head,int key){
    while(head!=NULL){
        if(head->val==key){
            cout<<" key found";
            return;
        }
        head=head->next;
    }
    cout<<"key not found";
}
node *insertAtbegin(node *head,int key){
    node *curr=new node(key);
    if(head==NULL) return curr;
    curr->next=head;
    return curr;
}
node *insertAtend(node *head,int key){
    node *curr=new node(key);
    if(head==NULL) return curr;
    node *temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=curr;
    return head;
}
node *delFirst(node *head){
    if(head==NULL||head->next==NULL) return NULL;
    node *curr=head->next;
    delete head;
    return curr;
}
node *delLast(node *head){
    if(head==NULL||head->next==NULL) return NULL;
    node *temp=head;
    node *curr;
    while (temp->next!=NULL)
    {
        curr=temp;
        temp=temp->next;
    }
    delete temp;
    curr->next=NULL;
    return head;
}
// node *insertAtGivenPos(node *head,int pos,int key){
//     node *curr=new node(key);
//     if(pos==1) {
//         curr->next=head;
//         return curr;
//     }
//     int c=1;
//     node *temp=head;
//     while(temp->next!=NULL&&(pos-c)>1){
//         c++;
//         temp=temp->next;
//     }
//     if(temp->next==NULL&&(pos-c)>1) return head;
//     node *temp1=temp->next;
//     temp->next=curr;
//     curr->next=temp1;
//     return head;
// }
node *insertAtGivenPos(node *head,int pos,int key,node *head1){
    
}
int main(){
    node *head=new node(10);
    head->next=new node(20);
    head->next->next=new node(30);
    head=insertAtGivenPos(head,3,25,head);
    traversal(head);

return 0;
}