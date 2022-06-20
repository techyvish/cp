#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{    

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    fastio;
   
    vector<int> v;
    int n;
    cin>>n;
    for(int i=0; i<n;i++){
        int k;
        cin>>k;
        v.push_back(k);    
    }
    auto q = v;
    sort(q.begin(), q.end());

    
    int i=0;
    int j=v.size()-1;
    int start=i, end=j;
    while (j>=1) {
        if (v[j-1]<v[j]) {
            
        } else {

        }
    }
    cout<<"yes"<<endl;
    cout<<start+1<<" "<< end+1;

    return 0;
}