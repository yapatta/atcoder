#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define reps(i,s,n) for(int (i)=(s);(i)<(n);++(i))
#define rep(i,n) reps(i,0,n)
#define reptr(i,n) for(int (i)=(n);(i)>=0;--(i))
#define All(x) (x).begin(),(x).end()
const ll MOD=1e9+7;
using namespace std;

//f(a,b) = f(0,a-1)+f(0,b)
//nが任意の偶数のとき,n^n+1 = 1
//for文で回すと絶対間に合わない
//xorの性質をうまく使おう

int main(){
  ll a,b;
  cin >> a >> b;
  ll num;

  if(a%2==0){
    num = b-a+1;
    if(num%2==0){
      if(num%4==0){
        cout << 0 << endl;
      }else{
        cout << 1 << endl;
      }
    }else{
      if((num-1)%4==0){
        cout << (0^b) << endl;
      }else{
        cout << (1^b) << endl;
      }
    }
  }else{
    num = b-a-1;
    if(num%2==0){
      if(num%4==0){
        cout << (0^a^b) << endl;
      }else{
        cout << (1^a^b) << endl;
      }
    }else{
      if((num-1)%4==0){
        cout << (0^a^(b-1)^b) << endl;
      }else{
        cout << (1^a^(b-1)^b) << endl;
      }
    }
  }
}
