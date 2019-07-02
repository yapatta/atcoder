#include <bits/stdc++.h>
typedef long long ll;
#define reps(i,s,n) for(int (i)=(s);(i)<(n);++(i))
#define rep(i,n) reps(i,0,n)
using namespace std;

int main() {
  string x;
  cin >> x;
  bool flag=true;
  int i=0;
  while(i<x.size()){
    if(x[i]=='c'&&x[i+1]=='h'){
      i+=2;
      continue;
    }else if(x[i]=='o'||x[i]=='k'||x[i]=='u'){
      i++;
      continue;
    }else{
      flag=false;
      break;
    }
  }
  if(flag) cout << "YES" << endl;
  else cout << "NO" << endl;
}
