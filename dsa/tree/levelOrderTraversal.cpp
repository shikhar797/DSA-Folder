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
int heightOfTree(node *root){
    if(root==NULL) return 0;
    return max(heightOfTree(root->left),heightOfTree(root->right))+1;   
}
// void levelOrderTraversal(node *root,int h){
//     if(root==NULL) return;
//     if(h==1) cout<<root->key<<" ";
//     levelOrderTraversal(root->left,h-1);
//     levelOrderTraversal(root->right,h-1);
// }
//                   ................................ITERATIVE LEVEL ORDER TRAVERSAL.........................
void LevelOrderTraversal(node *root){
    queue<node *>q;
    q.push(root);
    while(!q.empty()){
        root=q.front();
        cout<<root->key<<" ";
        q.pop();
        if(root->left) q.push(root->left);
        if(root->right) q.push(root->right);
    }
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
    int h=heightOfTree(root);
    int i=1;
    // while(h){
        
    //     levelOrderTraversal(root,i);
    //     h--;
    //     i++;
    // }
    LevelOrderTraversal(root);
    
    
return 0;
}

//this code is traversing the tree from top to bottom



