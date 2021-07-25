int num;
int result;
void dfs(int v, int count, vector<int> &A, vector<bool> vis, vector<vector<int>> &adj){
    vis[v] = true;
    if(A[v]==1) count++;
    for(int child : adj[v]) if(vis[child] == false) dfs(child, count, A, vis, adj);
    if(adj[v].size()==1 && count<=num) result++; 
}


int Solution::solve(vector<int> &A, vector<vector<int> > &B, int C) {
    int n = A.size();
    vector<vector<int>> adj(n);
    vector<bool> vis(n, false);
    result = 0;
    num = C;
    for(int i=0; i<n-1; i++){
        adj[B[i][0]-1].push_back(B[i][1]-1);
        adj[B[i][1]-1].push_back(B[i][0]-1);
    }
    dfs(0, 0, A, vis, adj);
    return result;
}
