// depth first search in cpp

void dfs(int node, vector<vector<int>>& adj, vector<bool>& visited){
    visited[node] = true;
    cout<<node<<" ";

    for(int neighbor : adj[node]){
        if(!visited[neighbor]){
            dfs(neighbor, adj, visited);
        }
    }
}