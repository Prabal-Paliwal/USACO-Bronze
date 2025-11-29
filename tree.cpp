//https://codeforces.com/contest/1846/problem/D

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // freopen("test.in", "r", stdin);
    // freopen("test.out", "w", stdout);
    cout << fixed << setprecision(12);
    int t; cin >> t;
    long double zero = 0.0L;
    for(int test = 0; test < t; test++){
        long double n,b,h; cin >> n >> b >> h;
        vector<long double> y(n);
        for(long double& i : y)cin >> i;
        long double ans = 0.0L;
        for(int i = 0; i < n-1; i++){
            ans += ((max(zero ,(y[i]+h) - y[i+1])*b)/h + b) * (h - max(zero, (y[i]+h) - y[i+1])) * 0.5;
        }
        ans += 0.5 * b *h;
        cout << ans << endl;
    }
}
