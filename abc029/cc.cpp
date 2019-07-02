#include <bits/stdc++.h>
typedef long long ll;
#define reps(i,s,n) for(ll (i)=(s);(i)<(n);++(i))
#define rep(i,n) reps(i,0,n)
using namespace std;

int main(){
  int N;
  queue<string> s;
  cin >> N;
  s.push("");
  while(1){
    string tmp=s.front();
    if(tmp.size()==N){
      cout << tmp << endl;
    }else if(s.size()==0){
      break;
    }else{
      s.push(tmp+"a");
      s.push(tmp+"b");
      s.push(tmp+"c");
      s.pop();
    }
  }
}
