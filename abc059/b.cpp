#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  string a,b,mess;
  bool flag=true;
  cin >> a >> b;
  if(a.size()>b.size()) {
    mess="GREATER";
  }else if(a.size()<b.size()) {
    mess="LESS";
  } else {
    for(int i=0;i<a.size();i++) {
      if(a[i]>b[i]) {
        mess="GREATER";
        flag=false;
        break;
      }else if(a[i]<b[i]) {
        mess="LESS";
        flag=false;
        break;
      }
    }
    if(flag) mess="EQUAL";
  }
  cout << mess << endl;
}
