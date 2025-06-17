#include <bits/stdc++.h>
using namespace std;
struct node{
    int key;
    node *right;
    node *left;
    node(int k){
        key=k;
        left=right=NULL;
    }
};
void sizeOfBinaryTree(node *root){
    int c=0;
    if(root==NULL){
        cout<<"Tree is empty";
    }
    queue<node*>q;
    q.push(root);
    while(q.empty()==false){
        node *curr=q.front();
        q.pop();
        if(curr->left!=NULL){
            q.push(curr->left);
            c++;
        }
        if(curr->right!=NULL){
            q.push(curr->right);
            c++;
        }
    }
    cout<<c+1;
}
int main(){
    node *root=new node(10);
    root->left=new node(20);
    root->right=new node(30);
    root->left->right=new node(40);
    root->left->left=new node(50);
    root->left->left->left=new node(60);
    root->left->left->left->left=new node(60);
    root->left->left->left->left->left=new node(60);
    
    sizeOfBinaryTree(root);
return 0;
}