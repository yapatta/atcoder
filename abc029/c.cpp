#include <bits/stdc++.h>
typedef long long ll;
#define reps(i,s,n) for(ll (i)=(s);(i)<(n);++(i))
#define rep(i,n) reps(i,0,n)
using namespace std;

int N;
void qu(string x){
  if(x.size()==N){
    cout << x << endl;
    return;
  }else{
    qu(x+"a");
    qu(x+"b");
    qu(x+"c");
  }
}

int main(){
  cin >> N;
  qu("");
}
