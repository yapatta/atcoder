#include <bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
#define __TRUE "YES"
#define __FALSE "NO"
#define MAX 100001
using namespace std;

int main() {
  string s;
  string a[]={"dream","dreamer","erase","eraser"};
  cin >> s;
  bool flag=true;
  int i=0;
  while(i<s.size()) {
    string tmp=s.substr(i,5);
    if(tmp==a[0]) {
      i+=5;
      if(s[i]=='e'&&s[i+1]=='r'&&s[i+2]!='a') {
        i+=2;
      }
    }else if(tmp==a[2]){
      i+=5;
      if(s[i]=='r') {
        i+=1;
      }
    }else {
      flag=false;
      break;
    }
  }
  if(flag) cout << __TRUE << endl;
  else cout << __FALSE << endl;
}
