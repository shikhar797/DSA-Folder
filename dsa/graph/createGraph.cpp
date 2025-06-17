#include <bits/stdc++.h>
using namespace std;
class Graph{
public:
    unordered_map<int,list<int>>adj;
    void create(int u,int v,bool direction){
        //direction 0 for undirected graph 
        //direction 1 for directed graph
        adj[u].push_back(v);
        if(!direction) adj[v].push_back(u);
    }
    void printadjList(){
        for(auto x:adj){
            cout<<x.first<<"->";
            for(auto y:x.second){
                cout<<y<<",";
            }
            cout<<endl;
        }
    }

};
int main(){
    //making the graph instance 
    Graph g;
    int n;
    cout<<"enter number of nodes";
    cin>>n;
    int e;
    cout<<"enter number of edges";
    cin>>e;
    for(int i=0;i<e;i++){
        int u,v;
        cin>>u>>v;
        g.create(u,v,0);
    }
    g.printadjList();

return 0;
}