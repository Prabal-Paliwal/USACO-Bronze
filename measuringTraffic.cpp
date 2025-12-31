//https://usaco.org/index.php?page=viewproblem2&cpid=917
    #include <bits/stdc++.h>
    using namespace std;

    int main()
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        freopen("traffic.in", "r", stdin);
        freopen("traffic.out", "w", stdout);

        int n;
        cin >> n;
        vector<int> low(n);
        vector<int> high(n);
        vector<string> state(n);
        int firstRangeLow = INT32_MIN;
        int firstRangeHigh = INT32_MAX;
        int secondRangeLow = INT32_MIN;
        int secondRangeHigh = INT32_MAX;
        for (int i = 0; i < n; i++) {
    cin >> state[i] >> low[i] >> high[i];
}
        for (int i = n-1; i >= 0; i--)
        {
            if (state[i] == "none")
            {
                firstRangeLow = max(low[i], firstRangeLow);
                firstRangeHigh = min(high[i], firstRangeHigh);
            }
            else if (state[i] == "on")
            {
                firstRangeLow -= high[i];
                firstRangeHigh -= low[i];
            }
            else if(state[i] == "off")
            {
                firstRangeLow += low[i];
                firstRangeHigh += high[i];
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (state[i] == "none")
            {
                secondRangeLow = max(low[i], secondRangeLow);
                secondRangeHigh = min(high[i], secondRangeHigh);
            }
            else if (state[i] == "off")
            {
                secondRangeLow -= high[i];
                secondRangeHigh -= low[i];
            }
            else if(state[i] == "on")
            {
                secondRangeLow += low[i];
                secondRangeHigh += high[i];
            }
        }
        firstRangeLow = max(0, firstRangeLow);
        secondRangeLow = max(0, secondRangeLow);
        cout << firstRangeLow << " " << firstRangeHigh << endl;
        cout << secondRangeLow << " " << secondRangeHigh;
    }
