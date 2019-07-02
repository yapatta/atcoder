#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> h(N);
  int min=105;
  ll ans=0;
  for(int i=0;i<N;i++) {
    cin >> h[i];
    if(min>h[i]) {
      min=h[i];
    }
  }
  ans += min;
  for(int i=0;i<N;i++) {
    h[i] -= min;
  }
  int num=0;
  while(1) {
    bool flag=true;
    for(int i=0;i<N;i++) {
      int bmin=h[i];
      if(h[i]!=0) {
        flag=false;
        //部分最小値
        int k=i+1;
        while(1) {
          if(h[k]==0) {
            for(int s=i;s<k;s++) {
              h[s] -= bmin;
            }
            i=k;
            ans += bmin;
            break;
          }
          if(bmin>h[k]) {
            bmin=h[k];
          }
          k++;
        }
      }
    }
    if(flag) {
      cout << ans << endl;
      return 0;
    }
    num++;
  }
}
