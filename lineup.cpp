// https://usaco.org/index.php?page=viewproblem2&cpid=965

#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;

int n;
vector<string> cow = {"Bessie", "Buttercup", "Belinda", "Beatrice", "Bella", "Blue", "Betsy", "Sue"};
map<string, vector<string>> con;

bool checks(){
    for(int i = 0; i < 8; i++){
        if(con.count(cow[i]) > 0){
            for(int j = 0; j < size(con[cow[i]]); j++){
                if(con[cow[i]][j] != cow[max(0, i-1)] && con[cow[i]][j] != cow[min(i+1, 7)]){
                    return false;
                }
            }
        }
    }
    return true;
}

int main() {
    freopen("lineup.in", "r", stdin);
    freopen("lineup.out", "w", stdout);

    sort(cow.begin(), cow.end());
    cin >> n;

    for(int i = 0; i < n; i++){
        string a,b, trash;
        cin >> a;
        cin >> trash;
        cin >> trash;
        cin >> trash;
        cin >> trash;
        cin >> b;
        con[a].push_back(b);
    }
    
    do{
        if(checks()){
            for(string& i : cow){
                cout << i << endl;
            }
            break;
        }
    }while(next_permutation(cow.begin(), cow.end()));
    
}
