#include <bits/stdc++.h>

using namespace std;
typedef pair<int,int> ii;
typedef vector<ii> vii;

int  contains_cycle(int node, 
         vector<vector<ii>> &adj, 
         vector<bool> &visited, 
         int parent) {

    visited[node] = true;

    for (auto nbr : adj[node]) {
        
        if ( !visited[nbr.first] ) {
            int nbrFoundACyclew = dfs(nbr.first, adj, visited, node); 
            if (nbrFoundACyclew) {
                return true;
            }       
        } else if ( nbr.first != parent) {
            return true;
        }
    }

    return false;
}


signed main() {
    return 0;
}