//https://usaco.org/index.php?page=viewproblem2&cpid=591

#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("promote.in", "r", stdin);
    freopen("promote.out", "w", stdout);

    int b1,b2,s1,s2,g1,g2,p1,p2; cin >> b1 >> b2 >> s1 >> s2 >> g1 >> g2 >> p1 >> p2;

    int promop = p2 - p1;
    int promog = g2 + promop - g1;
    int promos = s2 + promog - s1;

    cout << promos << endl << promog << endl << promop;

}
