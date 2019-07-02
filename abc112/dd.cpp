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

//Mの公約数を配列に格納
//Mにおける任意の公約数をsと置くと, M%s==0,N<=M/sを満たす、最大のsの値がanser

int main(){
  ll N,M;
  cin >> N >> M;

  ll mKey = 1;
  for(ll i=2;i*i<=M;i++){
    if(M%i==0){
      //ルートM以下で最大の割り切れる数
      mKey = i;
      break;
    }
  }

  if(N==1){
    cout << M << endl;
    return 0;
  }else{
    //Mが素数のとき
    if(mKey == 1){
      cout << 1 << endl;
      return 0;
    }
  }

  //この状態で必ずMは割り切れるよな?
  ll max = 1;
  ll sMax = M/mKey;
  for(ll s=2;s<=sMax && s*N<=M;s++){
    if(M%s==0){
      max = s;
    }
  }
  cout << max << endl;
}
