#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define reps(i,s,n) for(int (i)=(s);(i)<(n);++(i))
#define rep(i,n) reps(i,0,n)
#define reptr(i,n) for(int (i)=(n);(i)>=0;--(i))
#define All(x) (x).begin(),(x).end()
using namespace std;

int main(){
  int N;
  string S;
  cin >> N >> S;
  vector<string> ans;
  ans.push_back("b");
  ll i=0;
  while(1){
    if(ans[i]==S){
      cout << i << endl;
      return 0;
    }
    i++;
    if(i%3==1){
      ans.push_back("a"+ans[i-1]+"c");
    }else if(i%3==2){
      ans.push_back("c"+ans[i-1]+"a");
    }else{
      ans.push_back("b"+ans[i-1]+"b");
    }
    if(ans[i].size()>N){
      cout << -1 << endl;
      return 0;
    }
  }
}
