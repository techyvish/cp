// How many ways you can climb ladder with N steps 
// if you're allowed to make a K jumps.

#include <vector>
#include <iostream>
#include <utility>

using namespace std;
const int INF = 1e9+5;

int solve(int n, int k, vector<int>& dp) {
    if ( n == 0 ) {
        return 1;
    }
    if (n < 0 ){
        return 0;
    }

    if (dp[n] != -1) {
        return dp[n];
    }

    int i = 1;
    int sum = 0;
    while (i <= k) {
        sum += solve(n-i, k, dp);
        dp[n] = sum;
        i++;
    }

    return sum;
}

int solveBU(int n , int k, vector<int>& dp ) {

    dp[0] = 1 ;
        
    for (int i = 1 ; i <= n ; i++ ) {
        for (int jump = 1; jump <= k ;jump++) {
            if (i-jump >=0) {
                dp[i] += dp[i-jump];
            }
        }
    }
    return dp[n];
}

int main() {
    
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    
    int n,k;
    cin >> n;
    cin >> k;
    
    vector<int> dp(n+1,0);
    // int totalWays = solve(n,k,dp);
    int totalWays = solveBU(n,k,dp);
    cout << totalWays;
    return 0;
}