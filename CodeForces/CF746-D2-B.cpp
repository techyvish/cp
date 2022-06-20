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
    int n;
    string s;

    cin>>n;
    cin>>s;

    deque<char> q;
    int i=0;


    while(i!=n) {
      if(i%2 !=0){
        if (n%2==0) {
          q.push_back(s[i]);
        } else {
          q.push_front(s[i]);
        }
      } else {
        if (n%2==0) {
          q.push_front(s[i]);
        } else {
          q.push_back(s[i]);
        }
      }
      i++;
    }
    for (auto x: q){
      cout<<x;
    }
    return 0;
}