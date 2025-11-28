//https://codeforces.com/problemset/problem/1914/C

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // freopen("test.in", "r", stdin);
    // freopen("test.out", "w", stdout);

    int t; cin >> t;
    for(int test = 0; test < t; test++){
    int n,k; cin >> n >> k;
    vector<int> pref(n+1);
    pref[0] = 0;
    for(int i = 1; i < n+1; i++){
        cin >> pref[i];
        pref[i] += pref[i-1];
    }
    vector<int> b(n);
    for(int& i : b) cin >> i;
    int ans = 0;
    int maxB = 0;
    for(int s = 0; s < k && s < n; s++){
        maxB = max(maxB, b[s]);
        ans = max(ans, pref[s+1] + (maxB * (k - (s + 1))));
    }
    cout << max(ans, pref[min(n, k)]) << "\n";
}
}
