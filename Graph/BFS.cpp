#include <bits/stdc++.h>
// Directed, UnDirected, Weighted Graph representation
// AdjecencyList

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"
using namespace std;

vector<int> BFS(int V, vector<pair<int,int>> adj[]) {

  vector<int> bfs;
  vector<int> VIS(V+1,0);

  vector<int> distance(V+1);
  vector<int> parent(V+1);

  // Distance to all node will be zero
  // Parent of all nodes are -1
  // Parent of first node will be zero
  for (int i = 0 ; i < V ; i++ ) {
    distance[i] = 0;
    parent[i] = -1;
  }
  parent[i] = 0;

  // Loop through all the nodes
  // When you're attempting graph questions loop through 
  // all the nodes
  for (int i = 0 ; i < V ; i++ ) {

    // if node is not visited
    if (VIS[i] == 0 ) {

      // Create a queue, push first node into the queue, 
      // mark first node visited
      queue<int> q;
      q.push(i);
      VIS[i] = 1;

      // While queue is not empty
      while (!q.empty()) {

        // Get the front & pop from the queue
        auto front = q.front();
        q.pop();

        // Put the node in output array
        bfs.push_back(front);
        
        // Loop throgh all the adjecent node
        for (auto x: adj[front]) {

          // if not visited node (x) then
          if (!VIS[x.first]) {
            // Current distance till front + 1 
            distance[x.first] = distance[front]+1;
            // Current node's parent is front
            parent[x.first] = front;
            // Push into the queue
            q.push(x.first);
            // Visit the node
            VIS[x.first] = 1;
          }
        }
      }

    }

  }
  return bfs; // Stores traversal
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

  auto a = BFS(n,adj);
  for (auto k : a) {
    cout << k << " ";
  }

}