//https://usaco.org/index.php?page=viewproblem2&cpid=1204

#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> a;
vector<int> b;

void change(int x, int y){
    int i = y;
    while(i > x){
        swap(a[i], a[i-1]);
        i--;
    }
}

int main(){
    // freopen("test.in", "r", stdin);
    // freopen("test.out", "w", stdout);

    cin >> n;
    a.resize(n);
    b.resize(n);

    for(int& i : a)cin >> i;
    for(int& i : b)cin >> i;

    int ans = 0;
    int t = 0;
    while(t < n){
        if(a[t] == b[t]){
            t++;
        }else{
            for(int i = t; i < n; i++){
                if(b[t] == a[i]){
                    change(t, i);
                    break;
                }
            }
            t++;
            ans++;
        }
    }
    cout << ans;
}
