#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

int main() {
  ll N;
  vector<ll> a;
  //firstに数字,secondに数字の個数
  vector< pair<ll,ll> > data;
  cin >> N;
  a.resize(N);
  for(int i=0;i<N;i++) {
    cin >> a[i];
  }
  sort(a.begin(),a.end());
  int num=0;
  data.push_back(make_pair(a[0],1));
  for(int i=1;i<N;i++) {
    if(a[i-1]!=a[i]) {
      data.push_back(make_pair(a[i],1));
      num++;
    }else {
      data[num].second++;
    }
  }
  ll ans=0;
  for(int i=0;i<data.size();i++) {
    if(data[i].first<data[i].second) {
      ans += (data[i].second-data[i].first);
    }
    if(data[i].first>data[i].second) {
      ans += data[i].second;
    }
  }
  cout << ans << endl;
}
