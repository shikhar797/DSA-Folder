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

node *create()
{
    int n;
    cout << "enter the number of element";
    cin >> n;
    node *head = NULL;
    node *curr = head;
    for (int i = 0; i < n; i++)
    {
        int a;
        cout << "enter the element " << i + 1 << endl;
        cin >> a;
        if (i == 0)
        {
            curr = new node(a);
            head = curr;
        }
        else
        {
            node *temp = new node(a);
            curr->next = temp;
            node *temp1=curr;
            curr = curr->next;
            curr->prev=temp1;
        }
    }
    return head;
}

void print(node *head){
    if(head==NULL) return;
    node *curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
}

node *insertAtBegin(node *head,int val){
    node *temp=new node(val);
    if(head==NULL) return temp;
    temp->next=head;
    head->prev=temp;
    return temp;
}

node *insertAtEnd(node *head,int val){
    node *temp=new node(val);
    if(head==NULL) return temp;
    node *curr=head;
    while(curr->next!=NULL){
        curr=curr->next;
    }
    curr->next=temp;
    temp->prev=curr;
    return head;  
}

// node *rev(node *head){
//     if(head==NULL||head->next==NULL) return head;
//     node *curr=head;
//     vector<int>v;
//     while(curr!=NULL){
//         v.push_back(curr->data);
//         curr=curr->next;
//     }                                             naive approach
//     curr=head;
//     while(curr!=NULL){
//         curr->data=v.back();
//         v.pop_back();
//         curr=curr->next;
//     }
//     return head;
// }

node *rev(node *head){
    if(head==NULL||head->next==NULL) return head;
    node *curr=head;
    node *prev=NULL;
}


node *delHead(node *head){
    if(head==NULL) {
        return NULL;
    }
    if(head->next==NULL){
        delete head;
        return NULL;
    }
    node *curr=head->next;
    delete head;
    curr->prev=NULL;
    return curr;
}

node *delLast(node *head){
    if(head==NULL) return NULL;
    if(head->next==NULL){
        delete head;
        return NULL;
    }
    node *curr=head;
    node *temp=curr;
    while(curr->next!=NULL){
        temp=curr;
        curr=curr->next;
    }

    delete curr;
    temp->next=NULL;
    return head;
}

node *createDCLL(){
    int n;
    cout << "enter the number of element";
    cin >> n;
    node *head = NULL;
    node *curr = head;
    for (int i = 0; i < n; i++)
    {
        int a;
        cout << "enter the element " << i + 1 << endl;
        cin >> a;
        if (i == 0)
        {
            curr = new node(a);
            head = curr;
            head->prev=head;
            head->next=head;
        }
        else
        {
            node *temp = new node(a);
            curr->next = temp;
            temp->prev=curr;
            curr = curr->next;
        }
        if(i==n-1){
            curr->next=head;
        }
    }
    return head;
}

void printDCLL(node *head){
    if(head==NULL) return;
    node *curr=head;
    cout<<curr->data<<" ";
    do
    {
        curr=curr->next;
        cout<<curr->data<<" ";
    } while (curr->next!=head);
    
}

node *insertAtHeadDCLL(node *head,int val){
    node *temp=new node(val);
    if(head==NULL){
        temp->next=temp;
        temp->prev=temp;
        return temp;
    }
    node *curr=head->next;
    head->next=temp;
    temp->next=curr;
    temp->prev=head;
    int t=head->data;
    head->data=temp->data;
    temp->data=t;
    return head;
}
