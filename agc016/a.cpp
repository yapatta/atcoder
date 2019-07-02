#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define reps(i,s,n) for(int (i)=(s);(i)<(n);++(i))
#define rep(i,n) reps(i,0,n)
#define reptr(i,n) for(int (i)=(n);(i)>=0;--(i))
#define All(x) (x).begin(),(x).end()
#define mp make_pair
const ll MOD=1e9+7;
using namespace std;

bool dec(string tmp){
  bool flag =true;
  char k = tmp[0];
  for(int j=1;j<tmp.size();j++){
    if(k != tmp[j]){
      flag = false;
      break;
    }
  }
  return flag;
}

//ある文字xを決めてそれを全探索
//一番処理回数が少ないものが答え
int main(){
  bool al[26]={};
  string s;
  cin >> s;
  rep(i,s.size()){
    al[s[i]-'a']=true;
  }
  ll ans = LLONG_MAX;
  rep(i,26){
    if(!al[i]) continue;
    char key = char('a'+i);
    string tmp = s;
    ll num = 0;

    while(1){
      if(dec(tmp)) break;

      rep(j,tmp.size()){
        if(tmp[j] == key || tmp[j+1] == key){
          tmp[j] = key;
        }
      }
      tmp.pop_back();
      num++;
    }

    if(num<ans) ans = num;
  }
  cout << ans << endl;
}
