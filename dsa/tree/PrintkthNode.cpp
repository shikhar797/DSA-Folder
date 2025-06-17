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
void printKth(node *root,int k){
    if(root==NULL) return;
    if(k==1) cout<<root->key<<" ";
    printKth(root->left,k-1);
    printKth(root->right,k-1);
}
int main(){
    node *root=new node(10);
    root->left=new node(20);
    root->right=new node(30);
    root->left->left=new node(25);
    root->left->right=new node(40);  
    root->left->right->right=new node(50);
    root->right->right=new node(60);
    root->right->right->right=new node(70);
    printKth(root,4);                     // if k==1 print root
return 0;
}
                     
                    