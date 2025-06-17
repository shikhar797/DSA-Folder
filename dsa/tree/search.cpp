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

// void search(node *root,int data,bool &found){
//     if(root==NULL) return ;
//     if(root->x==data){
//         cout<<"element found";
//         found=true;
//         return ;
//     }
//     else{                                        this is wrong because it iss printing muliiple found                                                         
//         search(root->left,data,found);            if element is repeated then it will print multiple time
//         search(root->right,data,found);
//     }
// }

bool search(node *root,int data){
    if(root==NULL) return false;
    if(root->x==data) return true; 
    if(search(root->right,data)) return true;
    else if(search(root->left,data)) return true;
    return false;
}

int main(){
    node *root=new node(10);
    root->left=new node(0);
    root->right=new node(30);
    root->left->left=new node(40);
    root->left->right=new node(0);
    root->left->left->left=new node(50);
    root->left->left->left->left=new node(50);
    // bool found=false;
    // search(root,50,found);
    // if(!found) cout<<"element not found";
    if(search(root,50)) cout<<"found";
    else cout<<"not ";
    
return 0;
}