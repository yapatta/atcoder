#include <bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;

void swap(ll *x,ll *y) {
  ll tmp=*x;
  *x=*y;
  *y=tmp;
}

int main() {
  int N;
  cin >> N;
  vector<ll> a(N);
  vector<pair<ll,ll> > pa(N);

  for(int i=0;i<N;i++) {
    cin >> pa[i].second;
  }
  for(int i=0;i<N;i++) {
    cin >> pa[i].first;
  }
  sort(pa.begin(),pa.end());

  bool flag=true,ff=truel;
  a[0]=pa[0].second;
  for(int c=0;c<100;c++) {
    ff=true;
    for(int i=1;i<N;i++) {
      a[i]=pa[i].second;
      int num=i-1;
      if( pa[i].second<pa[i].first ) {
        ff=false;
        while(num>=0) {
          if(pa[num].second>=pa[i].first && pa[i].second>=pa[num].first) {
            swap(&pa[i].second, &pa[num].second);
            break;
          }
          num--;
        }
      }
    }
  }

  ll count=0;
  for(int i=0;i<N&&flag;i++) {
    if(a[i]!=pa[i].second) count++;
    if(pa[i].second<pa[i].first) {
      flag=false;
      break;
    }
  }
  if(flag) cout << count << endl;
  else cout << -1 << endl;
}
