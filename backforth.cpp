//https://usaco.org/index.php?page=viewproblem2&cpid=857
#include <bits/stdc++.h>
using namespace std;


set<int> possible;
void recursion(int tank1, int tank2, int k, vector<int> f, vector<int> s){
    if(k >= 4){
        possible.insert(tank1);
        return;
    }
    if(k % 2 != 1){
        for(int i = 0; i < size(f); i++){
            auto first(f);
            auto second(s);
            int v = first[i];
            second.push_back(first[i]);
            first.erase(first.begin() + i);
            recursion(tank1 - v, tank2 + v, k+1, first, second);
        }
    }else{
        for(int i = 0; i < size(s); i++){
            auto first(f);
            auto second(s);
            int v = second[i];
            first.push_back(second[i]);
            second.erase(second.begin() + i);
            recursion(tank1 + v, tank2 - v, k+1, first, second);
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("backforth.in", "r", stdin);
    freopen("backforth.out", "w", stdout);
    vector<int> first;
    vector<int> second;
    for(int i = 0; i < 10; i++){
        int v; cin >> v;
        first.push_back(v);
    }
    for(int i = 0; i < 10; i++){
        int v; cin >> v;
        second.push_back(v);
    }
    
    recursion(1000, 1000, 0, first, second);
    cout << size(possible);
}
