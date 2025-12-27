//https://usaco.org/index.php?page=viewproblem2&cpid=617
#include <bits/stdc++.h>
using namespace std;

class cord{
    public : 
    int x;
    int y;
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("balancing.in", "r", stdin);
    freopen("balancing.out", "w", stdout);

    int n; cin >> n;
    int b; cin >> b;
    vector<int> X(n);
    vector<int> Y(n);
    vector<cord> cords(n);
    for(int i = 0; i < n; i++){
        cin >> cords[i].x >> cords[i].y;
        X[i] = cords[i].x + 1;
        Y[i] = cords[i].y + 1;
    }

    int ans = INT32_MAX;

    for(int i = 0; i < size(X); i++){
        for(int j = 0; j < size(Y); j++){
            int Q1 = 0;
            int Q2 = 0;
            int Q3 = 0;
            int Q4 = 0;
            for(cord& c : cords){
                if(c.x > X[i] && c.y > Y[j]){
                    Q1++;
                }else if(c.x < X[i] && c.y > Y[j]){
                    Q2++;
                }else if(c.x > X[i] && c.y < Y[j]){
                    Q4++;
                }else if(c.x < X[i] && c.y < Y[j]){
                    Q3++;
                }
            }
            ans = min(ans, max(max(Q1,Q2), max(Q3,Q4)));
        }
    }
    cout << ans;
}
