//https://usaco.org/index.php?page=viewproblem2&cpid=1228
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // freopen("test.in", "r", stdin);
    // freopen("test.out", "w", stdout);

    int n; cin >> n;
    vector<int> V(n);
    vector<char> C(n);

    for(int i = 0; i < n; i++){
        cin >> C[i] >> V[i];
    }
    int ans = INT32_MAX;
    for(int i = 0; i < n; i++){
        int liars = 0;
        for(int j = 0; j < n; j++){
            if((C[j] == 'G' && V[i] < V[j]) || (C[j] == 'L' && V[i] > V[j])){
                liars++;
            }
        }
        ans  = min(ans, liars);
    }
    cout << ans;
}
