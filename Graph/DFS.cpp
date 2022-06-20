
#include <bits/stdc++.h>
#include <vector>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"
using namespace std;

void dfs(vector<pair<int,int>> adj[], int i, vector<int> &VIS, vector<int> &d) {

  VIS[i] = 1;
  d.push_back(i);
  for ( auto x : adj[i]) {
    if ( !VIS[x.first]) {
      dfs(adj, x.first, VIS, d);
    }
  }
}

vector<int> dfsStart(int V, vector<pair<int,int>> adj[]) {
  vector<int> VIS(V+1, 0);
  vector<int> d;
  for (int i = 0; i < V ; i ++ ) {
    if (!VIS[i]) {
      dfs(adj, i, VIS, d);
    }
  }
  return d;
}

int main() {

  fastio;
#ifndef ONLINE_JUDGE
    freopen("_graph_input.txt","r",stdin);
    freopen("_graph_output.txt","w",stdout);
#endif


  int n, m;
  vector<pair<int,int>> adj[n+1];
  cin >> n >> m;

  for (int i = 0 ; i < m ; i ++) {
    int u,v,wt;
    cin >> u >> v >> wt ;

    adj[u].push_back({v, wt});
    adj[v].push_back({u, wt});
  }

  vector<int> d = dfsStart(n, adj);

  for (auto x: d){
    cout<< x << " ";
  }
  return 0;
}