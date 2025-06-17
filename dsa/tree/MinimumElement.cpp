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
int smallestElement=INT_MAX;
void SmalllestElement(node *root){
    if(root==NULL) return ;
    smallestElement=min(smallestElement,root->x);
    SmalllestElement(root->left);
    SmalllestElement(root->right);

}
int secondSmallest=INT_MAX;
void SecondSmallest(node *root){
    if(root==NULL) return ;
    if(root->x>smallestElement) secondSmallest=min(secondSmallest,root->x);
    SecondSmallest(root->left);
    SecondSmallest(root->right);
}
int main(){
    node *root=new node(60);
    root->left=new node(20);
    root->right=new node(30);
    root->left->left=new node(40);
    root->left->right=new node(150);
    root->left->left->left=new node(51);
    SmalllestElement(root);
    SecondSmallest(root);
    cout<<smallestElement<<" ";
    cout<<secondSmallest<<" ";
    
return 0;
}