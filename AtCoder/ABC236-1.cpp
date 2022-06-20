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
    int a,b;
    string s;

    cin >> s;
    cin >> a>> b;

    int temp = s[b-1];
    s[b-1] = s[a-1];
    s[a-1] = temp;

    cout<<s;

    return 0;
}