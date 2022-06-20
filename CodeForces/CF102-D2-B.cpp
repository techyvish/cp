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
    long long n;
    cin >>n;

    long long final=n;
    long long k=0;
    long long a=0;
    long long sum=0;
    while (final>9){
        a =0;
        while (n>0){
          a+=n%10;
          n=n/10;
        }
        final = a;
        n=a;
        sum++;
    }
    cout << sum;
    return 0;
}