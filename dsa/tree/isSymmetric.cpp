#include <bits/stdc++.h>
using namespace std;

struct node{
    int val;
    node *right;
    node *left;
    node(int k){
        val=k;
        right=left=NULL;
    }
};
bool check(node *root1,node*root2){
        if(!root1 && !root2) return true;
        if (!root1 || !root2) return false;
        return (root1->val==root2->val) && check(root1->left,root2->right) && check(root1->right,root2->left);
}
bool isSymmetric(node* root) {
        return check(root->left,root->right);
}
int main(){
    node *root=new node(10);
    root->left=new node(20);
    root->right=new node(20);
    root->right->right=new node(30);
    root->left->left=new node(30);
    cout<<isSymmetric(root);
return 0;
}