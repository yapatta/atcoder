#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define reps(i,s,n) for(ll (i)=(s);(i)<(n);++(i))
#define rep(i,n) reps(i,0,n)
#define reptr(i,n) for(ll (i)=(n);(i)>=0;--(i))
#define All(x) (x).begin(),(x).end()
#define MAX 1005
#define KEY 10007
using namespace std;

int main(){
  string a;
  cin >> a;
  if(a.size()==1){
    if(a[0]=='a'){
      cout << -1 << endl;
    }else{
      cout << (char)(a[0]-1) << endl;
    }
  }else{
    cout << a.substr(0,a.size()-1) << endl;
  }
}
