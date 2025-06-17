#include <bits/stdc++.h>
using namespace std;
struct node{
    int x;
    node *right;
    node *left;
    node(int k){
        x=k;
        left=right=NULL;
    }
};
int MaxInTree(node *root){
    if(root==NULL) return 0;
    static int  max=root->x;
    if(root->left!=NULL){
        if(root->left->x>max){
            max=root->left->x;
        }
        MaxInTree(root->left);
    }
    if(root->right!=NULL){

        if(root->right->x>max){
            max=root->right->x;
        }
        MaxInTree(root->right);
    }
    return max;
}
int main(){
    node *root=new node(60);
    root->left=new node(20);
    root->right=new node(30);
    root->left->left=new node(40);
    root->left->right=new node(50);
    root->left->left->left=new node(51);
    cout<<MaxInTree(root);
return 0;
}