#include <bits/stdc++.h>
typedef long long ll;
#define reps(i,s,n) for(ll (i)=(s);(i)<(n);++(i))
#define rep(i,n) reps(i,0,n)
#define reptr(i,n) for(ll (i)=(n);(i)>=0;--(i))
#define All(x) (x).begin(),(x).end()
using namespace std;
const ll KEY=1e18;

int a[26]={};
int main(){
  string s;
  cin >> s;
  rep(i,s.size()){
    a[s[i]-'a']++;
  }

  //すべてのアルファベットを含むとき
  if(s.size()==26){
    //keyの値が大きいほど、アルファベットは後ろへ行く
    int key = s[25]-'a';
    for(int i=24;i>=0;i--){
      if(key<(s[i]-'a')){
        key = s[i]-'a';
      }else{
        char low = 'z';
        for(int j=25;j>=i+1;j--){
          if(low>s[j] && s[i]<s[j]) low = s[j];
        }
        if(i>1) {
          cout << s.substr(0,i) << low << endl;
        }else{
          cout << char(s[0]+1) << endl;
        }
        return 0;
      }
    }
    cout << -1 << endl;
  }else{
    rep(i,26){
      if(a[i]==0){
        cout << s << char('a'+i) << endl;
        return 0;
      }
    }
  }
}
