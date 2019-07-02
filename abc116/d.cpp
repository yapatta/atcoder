#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

int main() {
  ull N,K;
  cin >> N >> K;
  vector< pair<ull,ull> > neta(N);
  for(int i=0;i<N;i++) {
    ull t,d;
    cin >> t >> d;
    neta[i] = make_pair(t,d);
  }
  sort(neta.begin(),neta.end());

  vector<pair<ull,ull> > ss;
  for(ull i=0;i<=N-2;i++) {
    if(neta[i].first != neta[i+1].first) {
      ss.push_back(make_pair(neta[i].first, i));
    }
  }
  ss.push_back( make_pair(neta[N-1].first, N-1));
  ull type=ss.size();
  for(int i=0;i<ss.size();i++) {
    cout << ss[i].first << " " << ss[i].second << endl;
  }
}
