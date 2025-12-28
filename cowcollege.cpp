//https://usaco.org/index.php?page=viewproblem2&cpid=1251
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // freopen("test.in", "r", stdin);
    // freopen("test.out", "w", stdout);

    long long n; cin >> n;
    vector<long long> a(n);
    long long maxP = 0;
    long long C = INT32_MAX;
    for(long long& i : a)cin >> i;
    sort(a.begin(), a.end());
    for(long long i = n-1; i >= 0; i--){
        if(a[i] == a[i-1]){
            continue;
        }
        if(maxP <= (n-i) * a[i]){
            maxP = max(maxP, (n-i) * a[i]);
            C = min(C, a[i]);
        }
    }
    cout << maxP << " " << C;
}
