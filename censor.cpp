//https://usaco.org/index.php?page=viewproblem2&cpid=526
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("censor.in", "r", stdin);
    freopen("censor.out", "w", stdout);

    string str; cin >> str;
    string s; cin >> s;
    string output = "";
    int i = 0;
    while(i < size(str)){
        if(size(output) >= size(s)){
            if(output.substr(size(output) - size(s), size(s)) == s){
                output = output.substr(0, size(output) - size(s));
                continue;
            }
        }
        output += str[i];
        i++;
    }
    cout << output;
}
