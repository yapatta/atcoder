#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define reps(i,s,n) for(int (i)=(s);(i)<(n);++(i))
#define rep(i,n) reps(i,0,n)
#define reptr(i,n) for(int (i)=(n);(i)>=0;--(i))
#define All(x) (x).begin(),(x).end()
#define mp make_pair
#define pb push_back
const ll MOD=1e9+7;
using namespace std;

int main(){
  int a[5],key;
  rep(i,5){
    cin >> a[i];
  }
  cin >> key;
  bool flag = true;
  for(int i=0;i<5;i++){
    for(int j=i+1;j<5;j++){
      if(abs(a[i]-a[j])>key){
        flag = false;
        break;
      }
    }
  }

  if(flag) cout << "Yay!" << endl;
  else cout << ":(" << endl;
}
