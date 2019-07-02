#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define reps(i,s,n) for(int (i)=(s);(i)<(n);++(i))
#define rep(i,n) reps(i,0,n)
#define reptr(i,n) for(int (i)=(n);(i)>=0;--(i))
#define All(x) (x).begin(),(x).end()
#define mp make_pair
const ll MOD=1e9+7;
const ll MAX=131075;
using namespace std;

ll N,A,B;
//既に存在したか
bool ex[MAX]={};
int main(){
  cin >> N >> A >> B;
  //keyは要素の個数
  ll powTwo = pow(2,N);
  if(N%2==0){
    cout << "YES" << endl;
    ex[A] = true;
    ex[B] = true;
    ll key = A;
    ll count = 2;
    cout << A;
    while(1){
      ll j=0;
      while(j < N){
        if(key && (1<<j)){
          if(ex[key-(1<<j)] == false){
            key = key-(1<<j);
            cout << " " << key;
            ex[key] = true;
            count++;
            break;
          }
        }else{
          if(ex[key+(1<<j)] == false){
            key = key+(1<<j);
            cout << " " << key;
            ex[key] = true;
            count++;
            break;
          }
        }
        j++;
        if( (j==N) && (count==powTwo) ){
          break;
        }
      }
      if(count == powTwo){
        break;
      }
    }
    cout << " " << B << endl;
  }else{
    cout << "NO" << endl;
  }
}
