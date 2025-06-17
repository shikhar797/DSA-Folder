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
node *insert(node *head,int pos,int data){
    node *curr=head;
    if(pos==1) {
       curr=new node(data);
       curr->next=head;
       return curr;
    }
    else if(){
        
    }
}
int main(){
    node *head=new node(10);
    head->next=new node(20);
    head->next->next=new node(30);
    head->next->next->next=new node(40);
    head=insert(head,2,30);
return 0;
}