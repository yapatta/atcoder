#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define reps(i,s,n) for(ll (i)=(s);(i)<(n);++(i))
#define rep(i,n) reps(i,0,n)
#define reptr(i,n) for(ll (i)=(n);(i)>=0;--(i))
#define All(x) (x).begin(),(x).end()
#define mp make_pair
#define pb push_back
const ll MOD=1e9+7;
using namespace std;

int main(){
  string S;
  cin >> S;
  ll n=0,w=0,s=0,e=0;
  rep(i,S.size()){
    if(S[i]=='N') n++;
    if(S[i]=='W') w++;
    if(S[i]=='S') s++;
    if(S[i]=='E') e++;
  }
  if(n>0 && w>0 && s>0 && e>0){
    cout << "Yes" << endl;
  }else if(n>0 && s>0 && e==0 && w==0){
    cout << "Yes" << endl;
  }else if(e>0 && w>0 && n==0 && s==0){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }
}
