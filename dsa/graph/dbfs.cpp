#include <bits/stdc++.h>
using namespace std;

void addEdge(vector<vector<int>> &adj, int i, int j) {
    adj[i][j] = 1;
    adj[j][i] = 1;
}

void bfs(vector<vector<int>>& adj, int s, bool visited[]) {
    queue<int> q;
    q.push(s);
    visited[s] = true;
    while (!q.empty()) {
        int a = q.front();
        q.pop();
        cout << a << " ";
        for (int i = 0; i < adj[a].size(); i++) {
            if (!visited[i] && adj[a][i] == 1) {
                visited[i] = true;
                q.push(i);
            }
        }
    }
}

void dbfs(vector<vector<int>>& adj, int v, int s) {
    bool visited[v] = {false};  // Initialize all elements to false
    bfs(adj, s, visited);        // Start BFS from the given source node
    
    // Handle disconnected components
    for (int i = 0; i < v; i++) {
        if (!visited[i]) {
            bfs(adj, i, visited);
        }
    }
}

int main() {
    int v = 99;
    vector<vector<int>> adj(v, vector<int>(v, 0));
    addEdge(adj, 0, 1);
    addEdge(adj, 0, 2);
    addEdge(adj, 1, 3);
    addEdge(adj, 2, 3);
    addEdge(adj, 4, 5);
    addEdge(adj, 4, 6);
    addEdge(adj, 5, 6);
    dbfs(adj, v, 0);
    return 0;
}
