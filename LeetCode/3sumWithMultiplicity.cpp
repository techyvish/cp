#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"
using namespace std;

class Solution {
public:
    int threeSumMulti(vector<int>& arr, int target) {
        
        unordered_map<int,int> m; 
        int ans=0, mod=1e9+7;
        
        for (int i = 0 ; i < arr.size() ; i ++ ) {
            if (m.find(target-arr[i]) != m.end()){
                ans = (ans + m[target-arr[i]]) % mod;
            }
                
            for (int j = 0 ; j < i ; j++ ) {
                m[arr[i]+arr[j]]++;
            }
        }
        
        return ans;
    }
};

int main() {


fastio;
#ifndef ONLINE_JUDGE
    freopen("_lc_input.txt","r",stdin);
    freopen("_lc_output.txt","w",stdout);
#endif

    Solution s;
    vector<int> v{1,2,3};
    s.threeSumMulti(v,3);
}