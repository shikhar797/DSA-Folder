#include <bits/stdc++.h>
using namespace std;
struct node{
    int x;
    node *left;
    node *right;
    node(int k){
        x=k;
        right=left=NULL;
    }
};
int MaxInTree(node *root){
    queue<node *>q;
    q.push(root);
    int max=root->x;
    while(q.empty()==false){
        node *curr=q.front();
        q.pop();
        if(curr->left!=NULL){
            q.push(curr->left);
            if(q.front()->x>max) max=q.front()->x;
        }
        if(curr->right!=NULL){
            q.push(curr->right);
            if(q.front()->x>max) max=q.front()->x;
        }
    }
    return max;
}
int main(){
    node *root=new node(10);
    root->left=new node(20);
    root->left->left=new node(30);
    root->left->left->left=new node(40);
    root->left->left->left->left=new node(50);
    root->left->left->left->left->left=new node(21);
    root->right=new node(-80);
    cout<<MaxInTree(root);
return 0;
}