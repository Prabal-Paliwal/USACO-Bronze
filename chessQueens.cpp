//http://cses.fi/problemset/result/15378725/
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // freopen("test.in", "r", stdin);
    // freopen("test.out", "w", stdout);

    vector<string> board(8);
    for(string& i : board) cin >> i;

    vector perm = {0,1,2,3,4,5,6,7};

    int ans = 0;
    do{
        pair<set<int>, set<int>> sums;
        bool works = true;
        for(int i = 0; i < 8; i++){
            if(board[i][perm[i]] == '*'){
                works = false;
                break;
            }
            sums.first.insert(i + perm[i]);
            sums.second.insert(i - perm[i]);
        }
        if(works && size(sums.first) == 8 && size(sums.second) == 8){
            ans++;
        }
    }while(next_permutation(perm.begin(), perm.end()));

    cout << ans;
}
