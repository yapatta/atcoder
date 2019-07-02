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
#define fi first
#define se second
const ll MOD=1e9+7;
using namespace std;

int main(){
  ll N;
  cin >> N;
  ll a=0,b=0,ab=0;
  ll cnt = 0;
  rep(i,N){
    string s;
    cin >> s;
    for(ll j=0;j<s.size()-1;j++){
      if(s[j]=='A' && s[j+1]=='B'){
        cnt++;
      }
    }
    if(s[0]=='B' && s[s.size()-1]=='A') ab++;
    else if(s[s.size()-1]=='A') a++;
    else if(s[0]=='B') b++;

  }
  if(ab>0){
    cnt += (ab-1);
    if(b>0) a++;
    if(a>0) b++;
  }

  cout << cnt+min(a,b) << endl;
}
