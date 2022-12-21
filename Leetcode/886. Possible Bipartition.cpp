class Solution {
public:
    bool bfs(int source, vector<vector<int>>& adj, vector<int>& color){
        queue<int> q;
        q.push(source);
        color[source] = 1; // 1-> Red and 0-> Blue

        while(!q.empty()){
            int node = q.front();
            q.pop();
            for(auto& neighbour : adj[node]){
                if(color[neighbour] == color[node])
                    return false;
                if(color[neighbour] == -1){
                    color[neighbour] = 1 - color[node];
                    q.push(neighbour);
                }
            }
        }
        return true;
    }
    bool possibleBipartition(int n, vector<vector<int>>& dislikes) {
        vector<vector<int>> adj(n+1);
        for(auto& dislike : dislikes){
            adj[dislike[0]].push_back(dislike[1]);
            adj[dislike[1]].push_back(dislike[0]);
        }
        
        vector<int> color(n+1, -1);
        for(int i=1; i<=n; i++){
            if(color[i]==-1){
                if(!bfs(i, adj, color))
                    return false;
            }
        }
        return true;
    }
};
