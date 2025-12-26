//https://usaco.org/index.php?page=viewproblem2&cpid=1011
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("triangles.in", "r", stdin);
    freopen("triangles.out", "w", stdout);

    int n; cin >> n;
    vector<int> x(n);
    vector<int> y(n);
    for(int i = 0; i < n; i++) cin >> x[i] >> y[i];
    int ans = 0;
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            for(int k = j+1; k < n; k++){
                if(x[i] == x[j]){
                    if(y[i] == y[j]){
                        ans = max(ans, abs(y[i] - y[j]) * abs(x[i] - x[j]));
                    }else if(y[j] == y[k]){
                        ans = max(ans, abs(y[i] - y[j]) * abs(x[j] - x[k]));
                    }else if(y[i] == y[k]){
                        ans = max(ans, abs(y[i] - y[j]) * abs(x[i] - x[k]));
                    }
                }else if(x[j] == x[k]){
                    if(y[i] == y[j]){
                        ans = max(ans, abs(y[j] - y[k]) * abs(x[i] - x[j]));
                    }else if(y[j] == y[k]){
                        ans = max(ans, abs(y[j] - y[k]) * abs(x[j] - x[k]));
                    }else if(y[i] == y[k]){
                        ans = max(ans, abs(y[j] - y[k]) * abs(x[i] - x[k]));
                    }
                }else if(x[i] == x[k]){
                    if(y[i] == y[j]){
                        ans = max(ans, abs(y[i] - y[k]) * abs(x[i] - x[j]));
                    }else if(y[j] == y[k]){
                        ans = max(ans, abs(y[i] - y[k]) * abs(x[j] - x[k]));
                    }else if(y[i] == y[k]){
                        ans = max(ans, abs(y[i] - y[k]) * abs(x[i] - x[k]));
                    }
                }
            }
        }
    }
    cout << ans;
}
