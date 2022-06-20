#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int topDown(int n, int prices[], vector<int>& dp) {

    if (n == 0 ){
        return 0;
    }

    if (dp[n] != -1) {
        return dp[n];
    }
    int ans = INT_MIN;

    for (int i=0; i<n ;i++){
        int cut = i+1;
        dp[n] = ans = max(ans, prices[i] + topDown(n-cut, prices, dp));
    }

    return ans;
}

int bottomUpDP(int n, int prices[], vector<int>& dp) {

    dp[0] = 0;
    for (int len = 1 ; len <= n ; len ++) {
        int ans = INT_MIN;
        for(int j = 0; j < len; j++) {
            int cut = j + 1;
            ans = max(ans, prices[j] + dp[len-cut]);
        }
        dp[len]=ans;
    }

    return dp[n];
}

int main()
{    

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    fastio;
    int n ;
    cin >> n;
    int *a = new int[n];

    for (int i =0 ; i< n ;i++){
        cin>>a[i];
    }

    vector<int> dp (n+1, -1);
    
    // cout << topDown(n,a,dp);
    cout << bottomUpDP(n,a,dp);
    return 0;
}