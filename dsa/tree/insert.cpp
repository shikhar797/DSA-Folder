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
void insert(node *root,int val){
    queue<node *>q;
    q.push(root);
    while (!q.empty())
    {
        root=q.front();
        q.pop();
        if(root->right){
            q.push(root->right);
        }
        else{
            root->right=new node(val);
            return ;
        }
        if(root->left){
            q.push(root->left);
        }
        else{
            root->left=new node(val);
            return ;
        }
    }
    
}
void inorder(node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        cout << root->x << " ";
        inorder(root->right);
    }
}
int main(){
    node *root=new node(60);
    root->left=new node(20);
    root->right=new node(30);
    root->left->left=new node(40);
    root->left->right=new node(50);
    root->left->left->left=new node(51);
    insert(root,12);
    inorder(root);
    
return 0;
}