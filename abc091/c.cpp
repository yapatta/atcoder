#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define reps(i,s,n) for(ll (i)=(s);(i)<(n);++(i))
#define rep(i,n) reps(i,0,n)
#define reptr(i,n) for(ll (i)=(n);(i)>=0;--(i))
#define All(x) (x).begin(),(x).end()
#define Rall(a) (a).rbegin(), (a).rend()
#define vll vector<ll>
#define vi vector<int>
#define pll pair<ll,ll>
#define pi pair<int,int>
#define mp make_pair
#define pb push_back
const ll MOD=1e9+7;
using namespace std;

signed main() {
  int N;
  cin >> N;
  vector<pair<int,int> > ab,cd;

  for(int i=0;i<N;i++) {
    int a,b;
    cin >> a >> b;
    ab.push_back({a,b});
  }
  for(int i=0;i<N;i++) {
    int c,d;
    cin >> c >> d;
    cd.push_back({c,d});
  }
  sort(All(ab));
  sort(All(cd));

  ll cnt = 0;
  auto itr=ab.begin();
  auto itr2=cd.begin();

  auto tmp = ab.end()+1;

  cout << endl;
  while(cd.size()>0 && ab.size()>0){
    //あるitr2に対して、abを一周見た
    if(itr==ab.end()){
      //itr2と組み合わせる組が存在する
      if(tmp!=ab.end()+1){
        //tmpは消したいabの組
        cout << (*tmp).first << " " << (*tmp).second << endl;
        ab.erase(tmp);
        cnt++;
      }
      cd.erase(itr2);

      if(ab.size()==0 || cd.size()==0){
        break;
      }
      //再び初期化
      itr = ab.begin();
      itr2 = cd.begin();
      tmp = ab.end()+1;
    }
    if(tmp==ab.end()+1){
      if((*itr2).first>(*itr).first && (*itr2).second>(*itr).second){
        tmp = itr;
      }
    }else if((*itr2).first>(*itr).first && (*itr2).second>(*itr).second){
      if((*tmp).second<(*itr).second){
        tmp = itr;
      }
    }
    itr++;

    if(ab.size()==0 || cd.size()==0){
      break;
    }
  }
  cout << cnt << endl;
}
