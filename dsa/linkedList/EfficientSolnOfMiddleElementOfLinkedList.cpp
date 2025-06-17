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
void middlelement(node *head){
    node *slow=head;
    node *fast=head;
    while(fast!=NULL&&fast->next!=NULL){
        fast=fast->next->next;
        slow=slow->next;
    }
    cout<<slow->data;

}
int main(){
    node *head=new node(10);
    head->next=new node(20);
    head->next->next=new node(30);
    head->next->next->next=new node(40);
    //head->next->next->next->next=new node(50);
    middlelement(head);
return 0;
}