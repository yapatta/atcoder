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
  string s,t;
  cin >> s >> t;
  ll n = s.size();

  for(ll i=0;i<n;i++){
    char k = s[i],l = t[i];
    for(ll j=i;j<n;j++){
      if(k==s[j]){
        if(l==t[j]){

        }else{
          cout << "No" << endl;
          return 0;
        }
      }
      if(l==t[j]){
        if(k==s[j]){

        }else{
          cout << "No" << endl;
          return 0;
        }
      }
    }
  }
  cout << "Yes" << endl;
}
