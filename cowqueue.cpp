//https://usaco.org/index.php?page=viewproblem2&cpid=713

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("cowqueue.in", "r", stdin);
    freopen("cowqueue.out", "w", stdout);

    int n; cin >> n;
    vector<pair <int, int>> a(n);
    for(int i = 0; i < n; i++) cin >> a[i].first >> a[i].second;
    sort(a.begin(), a.end());
    for(int i = 1; i < n; i++){
        int v = max(((a[i-1].first + a[i-1].second) - a[i].first),0);
        a[i].first += v;
    }
    cout << a[n-1].first + a[n-1].second;
}
