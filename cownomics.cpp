//https://usaco.org/index.php?page=viewproblem2&cpid=736
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("cownomics.in", "r", stdin);
    freopen("cownomics.out", "w", stdout);

    int n,m; cin >> n >> m;
    vector<string> plain(n);
    vector<string> mutated(n);
    for(string& i : mutated)cin >> i;
    for(string& i : plain)cin >> i;
    int ans = 0;
    for(int i = 0; i < m; i++){
        bool works = true;
        for(int j = 0; j < n; j++){
            for(int k = 0; k < n; k++){
                if(plain[j][i] == mutated[k][i]){
                    works = false;
                    break;
                }
            }
            if(!works){
                    break;
            }
        }
        if(works){ans ++;}
    }
    cout << ans;
}
