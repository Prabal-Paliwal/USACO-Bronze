//https://usaco.org/index.php?page=viewproblem2&cpid=809
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("taming.in", "r", stdin);
    freopen("taming.out", "w", stdout);
    int n; cin >> n;
    vector<int> a(n);
    for(int& i : a)cin >> i;
    a[0] = 0;
    for(int i = n-1; i>0; i--){
        if(a[i] > 0){
            if(a[i-1] != a[i]-1 && a[i-1] >= 0){
                cout << -1;
                return 0;
            }
            a[i-1] = a[i]-1;
        }
    }
    cout << count(a.begin(), a.end(), 0) << " " << count(a.begin(), a.end(), -1) + count(a.begin(), a.end(), 0);
}
