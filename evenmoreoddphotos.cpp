//https://usaco.org/index.php?page=viewproblem2&cpid=1084

#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;

int main() {
    // freopen("test.in", "r", stdin);
    // freopen("test.out", "w", stdout);
	
    int n; cin >> n;
    int even = 0;
    int odd = 0;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        if(x % 2 == 0){
            even++;
        }else {
            odd++;
        };
    }
    while(odd > even){
        odd -= 2;
        even++;
    }
    if(odd != even){
        cout << 2 * odd + 1;
    }else{
        cout << 2 * odd;
    }
}
