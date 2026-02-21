//https://usaco.org/index.php?page=viewproblem2&cpid=616
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("cbarn.in", "r", stdin);
    freopen("cbarn.out", "w", stdout);
    
    int n; cin >> n;
    vector<int> rooms(n);
    for(int& i : rooms) cin >> i;
    int ans = INT32_MAX;
    for(int i = 0; i < n; i++){
        int distance = 0;
        int j = i;
        for(int doorPassed = 0; doorPassed < n; doorPassed++){
            distance += doorPassed * rooms[j];
            if(j == n-1) j = -1;
            j++;
        }
        ans = min(distance, ans);
    }
    cout << ans;
}
