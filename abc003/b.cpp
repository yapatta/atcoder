#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
  string s,t;
  cin >> s >> t;
  bool flag=true;
  for(int i=0;i<s.size();i++){
    if(s[i]==t[i]){
    }else if(s[i]=='@'&&(t[i]=='a'||t[i]=='t'||t[i]=='c'||t[i]=='o'||t[i]=='d'||t[i]=='e'||t[i]=='r'||t[i]=='@')){
    }else if(t[i]=='@'&&(s[i]=='a'||s[i]=='t'||s[i]=='c'||s[i]=='o'||s[i]=='d'||s[i]=='e'||s[i]=='r'||s[i]=='@')){
    }else{
      flag=false;
    }
  }
  if(flag) cout << "You can win" << endl;
  else cout << "You will lose" << endl;
}
