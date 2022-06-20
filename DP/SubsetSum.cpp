#include <bits/stdc++.h>

using namespace std;

void f(int i, vector<int>& ds,int n,int k, int s, int a[]) {
    if ( i == n) {
      if (k == s) {
        for (auto x: ds) {
          cout << x << " ";
        }
        cout << '\n';
      }
    }

    ds.push_back(a[i]);
    s += a[i];
    f(i+1, ds, n, k, s, a);
    ds.pop_back();
    s -= a[i];
    f(i+1, ds, n, k, s, a);

}

int main() {
  int a[] = {1,2,3};
}