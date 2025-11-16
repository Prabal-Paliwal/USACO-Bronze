//https://usaco.org/index.php?page=viewproblem2&cpid=940

#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;

int n;
vector<vector<int>> adj;
vector<bool> visited;

void dfs(int node){
    visited[node] = true;
    for(int& i : adj[node]){
        dfs(i);
    }
}

int main() {
    freopen("factory.in", "r", stdin);
    freopen("factory.out", "w", stdout);

    cin >> n;
    adj.resize(n);
    visited.resize(n);

    for(int i = 0; i < n-1; i++){
        int a,b; cin >> a >> b;
        a--; b--;
        adj[b].push_back(a);
    }

    int ans = -1;
    for(int i = 0; i < n; i++){
        for(int k = 0; k < n; k++){
            visited[k] = false;
        }
        dfs(i);
        bool done = true;
        for(int j = 0; j < n; j++){
            if(visited[j] == false){
                done = false;
            }
        }

        if(done){
            ans = i+1;
            break;
        }
    }
    cout << ans;

}
