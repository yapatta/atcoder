#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define reps(i,s,n) for(ll (i)=(s);(i)<(n);++(i))
#define rep(i,n) reps(i,0,n)
#define reptr(i,n) for(ll (i)=(n);(i)>=0;--(i))
#define All(x) (x).begin(),(x).end()
const ll MOD=1e9+7;
using namespace std;

int main(){
 ll N,Q;
 cin >> N >> Q;
 string s;
 cin >> s;
 vector<int> n(s.size(), 0);
 n[0]=0;
 if(s[0]=='A' && s[1]=='C'){
   n[1]=1;
 }else{
   n[1]=0;
 }
 for(ll i=1;i<s.size();i++){
   if(s[i]=='A' && s[i+1]=='C'){
     n[i+1] = n[i-1]+1;
   }else{
     n[i+1] = n[i];
   }
 }

 vector<ll> l(Q),r(Q);
 rep(i,Q){
   cin >> l[i] >> r[i];
 }

 for(ll i=0;i<Q;i++){
   ll count=n[r[i]-1]-n[l[i]-1];
   cout << count << endl;
 }
}
