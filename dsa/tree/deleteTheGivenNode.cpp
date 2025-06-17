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
// void del(node *root,int val){
//     queue<node *>q;
//     q.push(root);
//     node *temp=NULL;
//     node *lastnode=NULL;
//     while (!q.empty())
//     {
//         lastnode=q.front();
//         q.pop();
//         if(lastnode->x==val){
//             temp=lastnode;
//         }
//         if(lastnode->right) q.push(lastnode->right);
            
//         if(lastnode->left) q.push(lastnode->left);
//     }
//     if (temp){
//         temp->x=lastnode->x;
//         delete lastnode;
//         // delete root;   we cannot delete it because of it is still connnected from its parent node
//         // root=nullptr;
//     }
    
// }
void del(node* root, int val) {
    if (!root) return; // If the tree is empty, return.

    queue<node*> q;
    q.push(root);
    
    node* target = nullptr;  // To store the node to delete
    node* lastNode = nullptr; // To track the last node
    node* parentOfLastNode = nullptr; 
    // Perform level-order traversal (BFS)
    while (!q.empty()) {
        lastNode = q.front();
        q.pop();
        
        // Check if current node has the value to delete
        if (lastNode->x == val) {
            target = lastNode;
        }
        
        // Add left and right children to the queue
        if (lastNode->left) {
            parentOfLastNode = lastNode;
            q.push(lastNode->left);
        }
        if (lastNode->right) {
            parentOfLastNode = lastNode;
            q.push(lastNode->right);
        }
    }

    // If the node to be deleted is found
    if (target) {
        // Replace the value of the target node with the value of the last node
        target->x = lastNode->x;

        // Now, disconnect the last node from its parent
        if (parentOfLastNode) {
            if (parentOfLastNode->left == lastNode) {
                parentOfLastNode->left = nullptr;
            } else {
                parentOfLastNode->right = nullptr;
            }
        }

        // Delete the last node (since we swapped the values)
        delete lastNode;
    }
}

void inorder(node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        cout << root->x << " ";
        inorder(root->right);
    }
}
int main(){
    node *root=new node(60);
    root->left=new node(20);
    root->right=new node(30);
    root->left->left=new node(40);
    root->left->right=new node(50);
    root->left->left->left=new node(51);
    del(root,50);
    inorder(root);
    
return 0;
}