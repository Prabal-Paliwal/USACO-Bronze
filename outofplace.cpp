//https://usaco.org/index.php?page=viewproblem2&cpid=785
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("outofplace.in", "r", stdin);
    freopen("outofplace.out", "w", stdout);
    
    int n; cin >> n;
    vector<int> a(n);
    for(int& i : a){
        cin >> i;
    }
    vector<int> b = a;
    sort(a.begin(), a.end());
    int count = 0;
    for(int i = 0; i < n; i++){
        if(a[i] != b[i]){
            count++;
        }
    }
    cout << count-1;
}
