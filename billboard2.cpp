//https://usaco.org/index.php?page=viewproblem2&cpid=783

#include <bits/stdc++.h>
using namespace std;

struct Rect {
    int x1, y1, x2, y2;
    void read(){
        cin >> x1 >> y1 >> x2 >> y2;
    }
    int area(){
        return (x2 - x1) * (y2 - y1);
    }
};

int intersection(int p1, int p2, int p3, int p4){
    return max(min(p2, p4) - max(p1, p3) , 0);
}

int main(){
    freopen("billboard.in", "r", stdin);
    freopen("billboard.out", "w", stdout);

    Rect a, b;
    a.read(); b.read();
    int tx = a.x2 - a.x1;
    int ty = a.y2 - a.y1;
    if((b.y2 >= a.y2 && b.y1 <= a.y1) && (b.x1 <= a.x1 || b.x2 >= a.x2)){
        tx -= intersection(a.x1, a.x2, b.x1, b.x2);
    }else if((b.x2 >= a.x2 && b.x1 <= a.x1) && (b.y1 <= a.y1 || b.y2 >= a.y2)){
        ty -= intersection(a.y1, a.y2, b.y1, b.y2);
    }
    cout << tx * ty;
}
