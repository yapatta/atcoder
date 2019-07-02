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

  ll i=0,count=0;
  while(i<s.size()){
    if(s[i]=='W'){
      count++;
      i++;
      continue;
    }else if(count>0 && s[i]=='A' && i>0){
      s[i-count]='A';
      for(ll tmp=i-count+1;tmp<=i;tmp++)
        s[tmp]='C';
    }
    count=0;
    i++;
  }

  cout << s << endl;
}
