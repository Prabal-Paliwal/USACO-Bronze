//https://usaco.org/index.php?page=viewproblem2&cpid=964
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("whereami.in", "r", stdin);
    freopen("whereami.out", "w", stdout);

    int n; cin >> n;
    string str; cin >> str;
    int ans = 0;
    while(ans < n){
        bool works = true;
        for(int i = 0; i < n; i++){
            for(int j = i+1; j < n; j++){
            if(str.substr(i,ans) == str.substr(j,ans)){
                works = false;
            }
        }
        }
        if(works){ cout << ans; return 0;}
        ans++;
    }
}
