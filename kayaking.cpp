//https://codeforces.com/contest/863/problem/B

#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;

int main(){
    // freopen("test.in", "r", stdin);
    // freopen("test.out", "w", stdout);
    
    int n; cin >> n;
    vector<int> arr(2*n);
    for(int& i : arr){
        cin >> i;
    }
    sort(arr.begin(), arr.end());
    int ans = INT16_MAX;
    for(int i = 0; i < n*2; i++){
        for(int j = i+1; j < n*2; j++){
            vector<int> TempArr = arr;
            TempArr.erase(TempArr.begin() + j);
            TempArr.erase(TempArr.begin() + i);
            sort(TempArr.begin(), TempArr.end());

            int count = 0;
            for(int k = 0; k < size(TempArr); k+= 2){
                count += TempArr[k+1] - TempArr[k];
            }
            ans = min(count, ans);
        }
    }
    cout << ans;
}
