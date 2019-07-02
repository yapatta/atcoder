#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define reps(i,s,n) for(int (i)=(s);(i)<(n);++(i))
#define rep(i,n) reps(i,0,n)
#define reptr(i,n) for(int (i)=(n);(i)>=0;--(i))
#define All(x) (x).begin(),(x).end()
const ll MOD=1e9+7;
using namespace std;

int main(){
  string s;
  cin >> s;
  ll sum=0;
  for(ll i=0;i<(1<<(s.size()-1));i++){
    ll ans=0;
    int l=0,num=1;
    for(ll tmp=0;tmp<s.size()-1;tmp++){
      if((1<<tmp)&i){
        ans+=stoll(s.substr(l,num));
        l+=num;
        num=1;
      }else{
        num++;
      }
    }
    ans+=stoll(s.substr(l,num));
    sum+=ans;
  }
  cout << sum << endl;
}
