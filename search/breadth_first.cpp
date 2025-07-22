//Should i just start farming?
// for now its a no 
// a yappacode sessions is it?

void bfs(int start , vector<vector<int>>& adj, vector<bool>& visited){
    queue<int> q;
    q.push(start);
    visited[start] = true;

    while(!q.empty()){
        int node = q.front():
        q.pop();

        for(int neighbor : adj[node]){
            if(!visited[neighbor]){
                visited[neighbor] = true;
                q.push(neighbor);
            }
        }
    }
}