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
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    int n,k,l;
    cin>>n>>k>>l;

    int sum=0;
    for (int i=1; i<=l; i++){
      sum += n*i;
    }
    if (sum-k > 0) {
      cout << sum-k;
    }else {
      cout << "0";
    }

    return 0;
}