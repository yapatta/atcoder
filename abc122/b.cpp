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
  int max=0;
  for(int i=0;i<s.size();i++){
    for(int j=1;j<=s.size()-i;j++){
      string tmp = s.substr(i,j);
      bool flag=true;
      rep(k,tmp.size()){
        if(tmp[k]=='A' || tmp[k]=='T' || tmp[k]=='G' || tmp[k]=='C'){
        }else{
          flag=false;
          break;
        }
      }
      if(flag){
        if(max<tmp.size()){
          max = tmp.size();
        }
      }
    }
  }
  cout << max << endl;
}
