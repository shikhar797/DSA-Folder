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

//       .............................ITERATIVE APPROACH ............................
// int heightOfTree(node *root){
//     int h=0;
//     int c=0;
//     stack<node *>st;
//     while(true){
//         while(root){
//             st.push(root);
//             root=root->left;
//             c++;
//         }
//         if(st.empty()) return h;
//         h=max(h,c);
//         root=st.top();
//         st.pop();
//         root=root->right;
//         c--;
//     }
// }

//  ...............................Another Recursive  Approach...................................
// int h=0,maximum=0;
// void heightOfTree(node *root){
//     if(root==NULL) return;
//     h++;
//     heightOfTree(root->left);
//     heightOfTree(root->right);
//     maximum=max(h,maximum);
//     h--;
// }

int main(){
    node *root=new node(1);
    root->left=new node(2);
    root->left->left=new node(4);
    root->left->left->left=new node(5);
    root->left->right= new node(6);
    cout<<heightOfTree(root);
    // cout<<maximum;
return 0;
}