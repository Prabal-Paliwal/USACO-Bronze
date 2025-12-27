//https://usaco.org/index.php?page=viewproblem2&cpid=593
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("mowing.in", "r", stdin);
    freopen("mowing.out", "w", stdout);

    int n; cin >> n;
    map<pair<int, int>, int> visited;
    int x = 0;
    int y = 0;
    bool changed = false;
    int ans = INT32_MAX;
    int time = 0;
    for(int a = 0; a < n; a++){
        char d; cin >> d;
        int steps; cin >> steps;
        for(int i = 0; i < steps; i++){
            if(d =='N'){
                y++;
            }else if(d == 'S'){
                y--;
            }else if(d == 'W'){
                x--;
            }else{
                x++;
            }
            time++;
            if(visited.find({x,y}) != visited.end()){
                ans = min(ans, time - visited[{x,y}]);
                changed = true;
            }
            visited[{x,y}] = time;
        }
    }
    if(changed){
        cout << ans;
    }else{
        cout << -1;
    }
}
