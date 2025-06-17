#include <bits/stdc++.h>
using namespace std;
struct node{
    int x;
    node *left;
    node *right;
    node(int k){
        x=k;
        left=right=NULL;
    }
};
void inorder(node *root){
    stack<node *>st;
    while(true){
        while(root){
            st.push(root);
            root=root->left;
        }
        if(st.empty()) return;
        root=st.top();
        st.pop();
        cout<<root->x<<" ";
        root=root->right;

    }
}
int main(){
    node *root = new node(10);
    root->left = new node(20);
    root->right = new node(30);
    root->left->left = new node(40);
    root->left->right = new node(50);
    inorder(root);
return 0;
}