#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;

#ifndef ONLINE_JUDGE
    freopen("_cp_input.txt","r",stdin);
    freopen("_cp_output.txt","w",stdout);
#endif
    int t;
    cin >>t ;
    while(t--) {
        
        int n ;
        cin >> n;

        long a[n+1];
        long b[n+1];
        
        for(int i = 0; i < n ; i++) cin >> a[i];
        for(int i = 0; i < n ; i++) cin >> b[i];

        for(int i = 0; i < n ; i++) {
            if (a[i] > b[i]) {
                swap(a[i],b[i]);
            }
        }
        
        long long ans = 0;
        for(int i = 0; i < n-1 ; i++) {
            ans += (abs(a[i]-a[i+1]) + abs(b[i]-b[i+1]));
        }
        cout << ans << endl;
    }

}