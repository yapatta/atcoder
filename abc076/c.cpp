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
//tで埋められる場所が複数あることも考えよう！

int main(){
  string s,t;
  cin >> s >> t;
  bool flag = false;
  //答えとなりそうな文字列
  vector<string> ans;
  rep(i,s.size()-t.size()+1){
    string tmp = s.substr(i,t.size());
    int j = 0;
    while(j < t.size()){
      if(tmp[j]==t[j] || tmp[j]=='?'){
        j++;
      }else{
        break;
      }
    }
    if(j==t.size()){
      string key = s;
      for(int k=i;k<i+t.size();k++){
        if(key[k]=='?'){
          key[k] = t[k-i];
        }
      }
      for(int k=0;k<key.size();k++){
        if(key[k]=='?'){
          key[k] = 'a';
        }
      }
      ans.push_back(key);
      flag = true;
    }
  }
  if(!flag){
    cout << "UNRESTORABLE" << endl;
    return 0;
  }
  sort(All(ans));
  cout << ans[0] << endl;
}
