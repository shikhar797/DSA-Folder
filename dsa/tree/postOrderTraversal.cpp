#include <bits/stdc++.h>
using namespace std;
struct node{
    int key;
    node *left;
    node *right;
    node(int k){
        key=k;
        right=left=NULL;
    }
};
void postorder(node *root){
    stack<node*>s;
        node *prev=NULL;
        // vector<int>v;
        // if(root==NULL) return {};
        while(true){
            while(root){
                s.push(root);
                root=root->left;
            }
            if(s.empty()) break;
            root=s.top();   
            if(!root->right||prev==root->right){
                // v.push_back(root->val);
                cout<<root->key<<" ";
                s.pop(); 
                prev=root;
                root=NULL;
            }
            else{
                root=root->right;
            }
        }
        // return v;
}
int main(){
    node *root=new node(30);
    root->left=new node(20);
    root->left->right=new node(25);
    root->left->left=new node(18);
    root->left->left->right=new node(18);
    root->left->left->left=new node(5);

    root->right=new node(40);
    root->right->left=new node(35);
    root->right->right=new node(45);
    root->right->right->left=new node(50);
    root->right->right->right=new node(60);
    postorder(root);
return 0;
}