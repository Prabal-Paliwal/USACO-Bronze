//https://usaco.org/index.php?page=viewproblem2&cpid=687

#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;

int main() {
    freopen("notlast.in", "r", stdin);
    freopen("notlast.out", "w", stdout);
	int n; cin >> n;
    map<string, int> herd;
    map<int, string> rev;
    set<int> productions;
    vector<int> prod2 = {};
    vector<string> pre = {"Bessie", "Elsie", "Daisy", "Gertie", "Annabelle", "Maggie", "Henrietta"};
    for(int i = 0; i < 7; i++){
        herd[pre[i]] = 0;
    }
    for(int i = 0; i < n; i++){
        string name; cin >> name;
        int prod; cin >> prod;
        herd[name] += prod;
    }
    for(auto i : herd){
        rev[i.second] = i.first;
        productions.insert(i.second);
        prod2.push_back(i.second);
    }
    auto it = productions.begin();
    advance(it, 1);
    int c = count(prod2.begin(), prod2.end(), *it);
    if(c > 1){
        cout << "Tie" << endl;
    }else {
        cout << rev[*it] << endl;
    }

}
