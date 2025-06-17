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
int heightOfTree(node *root){
    if(root==NULL) return 0;
    return max(heightOfTree(root->left),heightOfTree(root->right))+1;   
}
void levelOrderTraversal(node *root,int h){
    if(root==NULL) return;
    if(h==1) cout<<root->val<<" ";
    levelOrderTraversal(root->left,h-1);
    levelOrderTraversal(root->right,h-1);

}
int main(){
    vector<int>v={20,15,30,40,50,12,18,35,80,7};
    node *root=new node(v[0]);
    for(int i=1;i<v.size();i++){
        root=createBST(root,v[i]);
    }
    int h=heightOfTree(root);
    int i=1;
    while(h){
        
        levelOrderTraversal(root,i);
        h--;
        i++;
    }
return 0;
}