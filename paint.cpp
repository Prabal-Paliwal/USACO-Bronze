//https://usaco.org/index.php?page=viewproblem2&cpid=567

#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("paint.in", "r", stdin);
    freopen("paint.out", "w", stdout);

    int a,b,c,d; cin >> a >> b >> c >>d;

    vector<int> arr(101);

    for(int i = a; i < b; i++){
        arr[i] = 1;
    }
    for(int i = c; i < d; i++){
        arr[i] = 1;
    }

    int ans = 0;
    for(int i : arr){
        ans += i;
    }
    cout << ans;
}
