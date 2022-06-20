#include <vector>
#include <iostream>
#include <utility>

using namespace std;
const int INF = 1e9+5;

int jump(int n,int a[], vector<int>& dp) {
    if ( n == 0) {
        return 0;
    }
    if (dp[n] != -1) {
        return dp[n];
    }
    int ans =  abs(a[n-1]-a[n]) + jump(n-1,a,dp);
    if ( n-2 >= 0) {
        ans = min(ans, abs(a[n-2]-a[n]) + jump(n-2,a,dp));
    }
    dp[n] =ans;
    return ans;
}

int main() {
    
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    
    int n;
    cin >> n;
    int *a = new int[n];
    vector<int> dp(n,-1);
    for (int i =0;i<n;i++){
        cin>> a[i];
    }
    int p = jump(n-1,a,dp);
    cout << p;
    return 0;
}