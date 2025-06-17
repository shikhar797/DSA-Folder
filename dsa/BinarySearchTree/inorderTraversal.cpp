#include <bits/stdc++.h>
using namespace std;
struct node {
    int val;
    node *left;
    node *right;
    node (int x){
        val=x;
        left=right=NULL;
    }
};
node *createBST(node *root,int data){
    static node *root1=root;
    if(root->val>data&&root->left==NULL) root->left=new node(data);
    else if(root->val<data&&root->right==NULL) root->right=new node(data);
    else if(root->val>data&&root->left!=NULL){
        return createBST(root->left, data);
    } 
    else if(root->val<data&&root->right!=NULL){
        return createBST(root->right,data);
    } 
    return root1;
}
vector<int> inorder(node *root){
    vector<int>v;
    if(root==NULL) return v;
    vector<int>left=inorder(root->left);
    v.insert(v.end(),left.begin(),left.end());
    v.push_back(root->val);
    vector<int>right=inorder(root->right);
    v.insert(v.end(),right.begin(),right.end());
    return v;
}
int main(){
    vector<int>v={20,15,30,40,50,12,18,35,80,7};
    node *root=new node(v[0]);
    for(int i=1;i<v.size();i++){
        root=createBST(root,v[i]);
    }
    // preorder(root);
    vector<int>v1=inorder(root);
    for(int i=0;i<v1.size();i++){
        cout<<v1[i]<<" ";
    }

   
return 0;
}