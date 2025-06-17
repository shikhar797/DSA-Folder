#include <bits/stdc++.h>
using namespace std;
struct node{
    node *next;
    int data;
    node(int x){
        data=x;
        next=NULL;
    }
};
int search(node *head,int key){
    static int c=1;
    if(head==NULL) return 0;
    if(head->data==key) return c;
    if(head!=NULL) {
        c++;
        return search(head->next,key);
    }   
    return -1;
}
int main(){
    node *head=new node(10);
    head->next=new node(20);
    head->next->next=new node(30);
    cout<<search(head,30);
return 0;
}