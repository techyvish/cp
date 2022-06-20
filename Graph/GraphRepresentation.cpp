#include <bits/stdc++.h>
// Directed, UnDirected, Weighted Graph representation
// AdjecencyList

using namespace std;

int main() {

  int n, m;

  vector<pair<int,int>> adj[n+1];

  cin >> n >> m;

  for (int i = 0 ; i < n ; i ++) {
    int u,v,wt;
    cin >> u >> v >> wt ;

    adj[u].push_back({v, wt});
    adj[v].push_back({u, wt});
  }
}