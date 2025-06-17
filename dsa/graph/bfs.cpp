#include <bits/stdc++.h>
using namespace std;
void addEdge(vector<vector<int>> &adj,int i,int j){
    adj[i][j]=1;
    adj[j][i]=1;
}
void bfs(vector<vector<int>>&adj,int v,int s){
    bool visited[v];
    for(int i=0;i<v;i++){
        visited[i]=false;
    }
    queue<int>q;
    q.push(s);
    visited[s]=true;
    while (!q.empty())
    {
        int a=q.front();
        q.pop();
        cout<<a<<" ";
        for(int i=0;i<adj[a].size();i++){
            if(!visited[i]&&adj[a][i]==1){
                visited[i]=true;
                q.push(i);
            }
        }
    }
    
}
int main(){
    int v=99;
    vector<vector<int>> adj(v,vector<int>(v,0));
    addEdge(adj,0,1);
    addEdge(adj,0,2);
    addEdge(adj,1,2);
    addEdge(adj,1,3);
    addEdge(adj,2,3);
    addEdge(adj,2,4);
    addEdge(adj,4,3);
    bfs(adj,5,0);
return 0;
}