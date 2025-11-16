//https://usaco.org/index.php?page=viewproblem2&cpid=759

#include <bits/stdc++.h>
using namespace std;

int intersection (int p1, int p2, int p3, int p4){
    return max(min(p2,p4) - max(p1,p3),0);
}

int main(){
    freopen("billboard.in", "r", stdin);
    freopen("billboard.out", "w", stdout);

    vector<int> x1(3);
    vector<int> y1(3);
    vector<int> x2(3);
    vector<int> y2(3);

    for(int i = 0; i < 3; i++){
        cin >> x1[i];
        cin >> y1[i];
        cin >> x2[i];
        cin >> y2[i];
    }

    int area1 = (y2[0] - y1[0]) * (x2[0] - x1[0]);
    int area2 = (y2[1] - y1[1]) * (x2[1] - x1[1]);
    area1 = area1 - (intersection(x1[0], x2[0], x1[2], x2[2]) * intersection(y1[0], y2[0], y1[2], y2[2]));
    area2 = area2 - (intersection(x1[1], x2[1], x1[2], x2[2]) * intersection(y1[1], y2[1], y1[2], y2[2]));

    cout << area1 + area2;
}
