#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> ii;
typedef vector<ii> vii; 

bool dfs(int node, 
        vector<vii> &adj, 
        vector<bool> &visited,
        vector<bool> &stackvar) {

    visited[node] = true;
    stackvar[node] = true;

    for (auto nbr: adj[node]) {
        if (stackvar[nbr.first] == true) {
            return true;
        }
        else if ( visited[nbr.first] == false ) {
            bool containsABackEdge = dfs(nbr.first, adj, visited, stackvar);
            if (containsABackEdge) {
                return true;
            }
        }
    }

    stackvar[node] = false;
    return false;  

}

bool contains_cycle(int V, vector<vii> &adj) {
    
    vector<bool> visited(V+1);
    vector<bool> stackvar(V+1);

    for (int i = 0 ; i < V ; i++) {
        if (!visited[i]) {
            dfs(i, adj, visited, stackvar);
        }
    }
}

signed main() {

    return 0;
}