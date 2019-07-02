#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define reps(i,s,n) for(int (i)=(s);(i)<(n);++(i))
#define rep(i,n) reps(i,0,n)
#define reptr(i,n) for(int (i)=(n);(i)>=0;--(i))
#define All(x) (x).begin(),(x).end()
#define mp make_pair
#define pb push_back
const ll MOD=1e9+7;
using namespace std;

int main(){
  ll N,C;
  cin >> N >> C;
  vector< pair<ll,ll> > ch[C];
  rep(i,N){
    ll s,t;
    int c;
    cin >> s >> t >> c;
    ch[c-1].push_back(make_pair(s,t));
  }
  rep(i,C){
      sort(channel[i].begin(), channel[i].end());
  }

  const int T_MAX = 1e5 + 10;
  vector<int> time(T_MAX);
  for (int i = 0; i < C; i++) {
      int last = -1;
      for (int j = 0; j < channel[i].size(); j++) {
          int s = channel[i][j].first, t = channel[i][j].second;
          if (last == s) {
              time[last + 1]++;
              time[t + 1]--;
              last = t;
          } else {
              time[s]++;
              time[t + 1]--;
              last = t;
          }
      }
  }

  for (int i = 1; i < time.size(); i++) {
      time[i] = time[i - 1] + time[i];
  }
  cout << *max_element(time.begin(), time.end()) << endl;
}
