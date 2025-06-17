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
node *insertInBSt(node *root,int data){
    static node *root1=root;
    if(root1==NULL) return root1=new node(data);
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
// node *insert(node *root,int data){
//     node *temp=new node(data);
//     node *curr=root;
//     node *par=NULL;
//     while(curr!=NULL){
//         par=curr;
//         if(root->val>data){
//             curr=curr->left;
//         }
//         else if(root->val<data){
//             curr=curr->right;
//         }
//         else return root;
//     }
//     if(par==NULL) return  temp;
//     if(par->val<data) par->right= temp;
//     else if(par->val>data) par->left= temp;
//     return root;
    
// }     this thing is not  working properly

int main(){
    vector<int>v={20,15,30,40,50,12,18,35,80,7};
    node *root=new node(v[0]);
    for(int i=1;i<v.size();i++){
        root=createBST(root,v[i]);
    }
    // node *root=NULL;
    int data=25;
    root=insertInBSt(root,data);
    int h=heightOfTree(root);
    int i=1;
    while(h){
        
        levelOrderTraversal(root,i);
        h--;
        i++;
    }

return 0;
}