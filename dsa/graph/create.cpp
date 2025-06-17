#include <bits/stdc++.h>
using namespace std;
void addEdge(vector<vector<int>> &adj,int i,int j){
    adj[i][j]=1;
    adj[j][i]=1;
}
void display(vector<vector<int>>adj){
    for(int i=0;i<adj.size();i++){
        for(int j=0;j<adj[i].size();j++){
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int v=5;
    vector<vector<int>> adj(v,vector<int>(v,0));
    addEdge(adj,0,1);
    addEdge(adj,0,2);
    addEdge(adj,1,2);
    addEdge(adj,1,3);
    addEdge(adj,2,3);
    addEdge(adj,2,4);
    addEdge(adj,4,3);
    display(adj);
return 0;
}