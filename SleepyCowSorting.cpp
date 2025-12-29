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
    
    int dif = 4;
    for(int i = 1; i < n; i++){
        if(a[i] < a[i-1]){
            dif = i;
        }
    }
    int total = 0;
    while(true){
        bool works = true;
        for(int i = 0; i < n; i++){
            if(a[i] != i+1){
                works = false;
                break;
            }
        }
        if(works)break;
        total++;
        int movingI = dif;
        if(a[0] < a[dif]){
            movingI = dif - 1;
        }else{
            while(a[movingI] < a[0] && movingI < n){
                movingI++;
            }
            movingI--;
            dif--;
        }
        int v = a[0];
        for(int i = 0; i < movingI; i++){
            a[i] = a[i+1];
        }
        a[movingI] = v;
    }
    cout << total;
}
