//https://usaco.org/index.php?page=viewproblem2&cpid=784
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("lifeguards.in", "r", stdin);
    freopen("lifeguards.out", "w", stdout);
    
    int n; cin >> n;
    vector<pair<int, int>> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i].first >> a[i].second;
    }
    size_t ans = 0;
    for(int i = 0; i < n; i++){
        set<int> b;
        for(int j = 0; j < n; j++){
            if(j != i){
                for(int k = a[j].first; k < a[j].second; k++){
                    b.insert(k);
                }
            }
        }
        ans = max(ans, size(b));
    }
    cout << ans;
}
