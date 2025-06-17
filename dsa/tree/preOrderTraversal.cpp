#include <bits/stdc++.h>
using namespace std;
struct node{
    int key;
    node *right;
    node*left;
    node(int k){
        key=k;
        right=left=NULL;
    }
};
void preorder(node *root){
    if(root!=NULL){
        cout<<root->key<<" ";
        preorder(root->left);
        preorder(root->right);

    }
}
int main(){
    node *root=new node(10);
    root->left=new node(20);
    root->left->left=new node(25);
    root->right=new node (30);
    root->right->left=new node(40);
    root->right->left->right=new node(50);
    preorder(root);
return 0;
}