//https://usaco.org/index.php?page=viewproblem2&cpid=892
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("sleepy.in", "r", stdin);
    freopen("sleepy.out", "w", stdout);

    int n; cin >> n;
    vector<int> a(n);
    for(int& i : a)cin >> i;
    
    int dif = 0;
    for(int i = 1; i < n; i++){
        if(a[i] < a[i-1]){
            dif = i;
        }
    }
    cout << dif;
}
