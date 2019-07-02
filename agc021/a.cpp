#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
  string s;
  cin >> s;
  ll sum=0;
  //9が終わった時点を求める
  ll tmp=1;
  while(tmp<s.size()){
    if((s[tmp]-'0')!=9){
      break;
    }
    tmp++;
  }
  if(tmp==s.size()){
    sum=(s[0]-'0');
  }else{
    sum=(s[0]-'0'-1);
  }
  for(ll i=1;i<s.size();i++){
    sum+=9;
  }
  cout << sum << endl;
}
