//https://usaco.org/index.php?page=viewproblem2&cpid=1491
#include <bits/stdc++.h>
using namespace std;

int n, u;
vector<string> canvas;

int checkall(){
    int ans = 0;
    for(int i = 0; i < n/2; i++){
        for(int j = 0; j < n/2; j++){
            map<char, int> val;
            val[canvas[i][j]]++;
            val[canvas[i][n-j-1]]++;
            val[canvas[n-i-1][j]]++;
            val[canvas[n-1-i][n-1-j]]++;
            ans += min(val['.'],val['#']);
        }
    }
    return ans;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // freopen("test.in", "r", stdin);
    // freopen("test.out", "w", stdout);

    cin >> n >> u;
    canvas.resize(n);
    vector<pair<int,int>> p(n);
    for(string& i : canvas) cin >> i;

    int prev = checkall();
    cout << prev;

    for(int i = 0; i < u; i++){
        int r,c; cin >> r >> c;
        int x = r-1;int y = c-1;
        if(r > n/2){
            x = n-r;
        }
        if(c > n/2){
            y = n-c;
        }

        map<char, int> prevval;
        prevval[canvas[x][y]]++;
        prevval[canvas[x][n-y-1]]++;
        prevval[canvas[n-x-1][y]]++;
        prevval[canvas[n-1-x][n-1-y]]++;
        prev -= min(prevval['.'],prevval['#']);
        if(canvas[r-1][c-1] == '.'){
            canvas[r-1][c-1] = '#';
        }else{
            canvas[r-1][c-1] = '.';
        }

        map<char, int> val;
        val[canvas[x][y]]++;
        val[canvas[x][n-y-1]]++;
        val[canvas[n-x-1][y]]++;
        val[canvas[n-1-x][n-1-y]]++;
        prev += min(val['.'],val['#']);
        cout << "\n" << prev;
    }
} 
