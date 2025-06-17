#include <bits/stdc++.h>
using namespace std;
struct node{
    int key;
    node *right;
    node *left;
    node(int k){
        key=k;
        right=left=NULL;
    }
};
int minDepth(node* root) {
        if(!root) return 0;
        if(!root->right && !root->left) return max(minDepth(root->left),minDepth(root->right))+1;
        else{
            return min(minDepth(root->left),minDepth(root->right))+1;
        }
    }
int main(){
    node *root=new node(10);
    root->right=new node(30);
    root->right->right=new node(60);
    root->right->right->right=new node(70);
    cout<<minDepth(root);
return 0;
}