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
int maxE=INT_MIN;
void MaximumElement(node *root){
    if(!root) return ;
    maxE=max(maxE,root->x);
    MaximumElement(root->left);
    MaximumElement(root->right);

}
int smax=INT_MIN;
void SecondMax(node *root){
    if(!root) return;
    if(root->x<maxE){
        smax=max(smax,root->x);
    }
    SecondMax(root->left);
    SecondMax(root->right);

}
int main(){
    node *root=new node(60);
    root->left=new node(20);
    root->right=new node(30);
    root->left->left=new node(40);
    root->left->right=new node(150);
    root->left->left->left=new node(51);
    MaximumElement(root);
    SecondMax(root);
    cout<<maxE<<" ";
    cout<<smax;
return 0;
}