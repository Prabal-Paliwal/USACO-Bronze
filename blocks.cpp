//https://usaco.org/index.php?page=viewproblem2&cpid=664
#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("blocks.in", "r", stdin);
    freopen("blocks.out", "w", stdout);
    
    int n; cin >> n;
    vector<int> freq(26);
    vector<pair<string, string>> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i].first >> a[i].second;
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < 26; j++){
            freq[j] += max(count(a[i].first.begin(),a[i].first.end(), char('a' + j)),count(a[i].second.begin(),a[i].second.end(), char('a' + j)));
        }
    }
    for(int i : freq){
        cout << i << endl;
    }
}
