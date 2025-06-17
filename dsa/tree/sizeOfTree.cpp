#include <bits/stdc++.h>
using namespace std;
struct node{
    int key;
    node *left;
    node *right;
    node(int x){
        key=x;
        left=right=NULL;
    }
};
int sizeOfTree(node *root){
    if(root==NULL) return 0;
    return sizeOfTree(root->left)+sizeOfTree(root->right)+1;
}
int main(){
    node *root=new node(10);
    root->left=new node(20);
    root->right=new node(30);
    root->right->left=new node(30);
    root->right->left->right=new node(30);
    root->left->right=new node(40);
    root->left->left=new node(50);
    root->left->left->left=new node(50);
    root->left->left->left->left=new node(50);
    cout<<sizeOfTree(root);
return 0;
}