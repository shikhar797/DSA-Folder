#include <bits/stdc++.h>
using namespace std;
struct node {
    int data;
    node *next;
    node *prev;
    node(int x){
        data=x;
        next=prev=NULL;
    }
};
int main(){
    node *head=new node(10);
    head->next=new node(20);
    head->prev=NULL;
    head->next->next=new node(30);
    head->next->prev=head;
return 0;
}