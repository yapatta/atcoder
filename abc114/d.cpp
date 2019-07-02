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

int num[101];
int main(){
  int N;
  cin >> N;
  for(int i=1;i<=100;i++) num[i]=0;
  //100までの素数を作りたい
  //それらを割ることで、約数の数を配列に格納
  vector<int> sosu;
  for(int i=2;i<=100;i++){
    bool flag=true;
    for(int j=2;j*j<=i;j++){
      if(i%j==0){
        flag=false;
        break;
      }
    }
    if(flag){
      sosu.pb(i);
    }
  }
  for(int i=2;i<=N;i++){
    int tmp = i;
    while(1){
      for(int j=0;sosu[j]<=tmp;j++){
        int s = sosu[j];
        while(1){
          if(tmp%s==0){
            num[s]++;
            tmp /= s;
          }else{
            break;
          }
        }
        if(tmp==1){
          break;
        }
      }
      if(tmp==1){
        break;
      }
    }
  }
  int four=0,two=0,a=0,b=0,c=0,d=0,e=0;
  for(int i=2;i<=100;i++){
    if(num[i]>=14) a++;
    else if(4<=num[i] && num[i]<14) b++;

    if(num[i]>=24) c++;
    else if(2<=num[i] && num[i]<24) d++;

    if(num[i]>=4) four++;
    else if(2<=num[i] && num[i]<4) two++;

    if(num[i]>=74) e++;
  }
  if(four<2){
    cout << 0 << endl;
    return 0;
  }else{
    cout << ((four*(four-1))/2)*(four+two-2) + a*(a-1+b) + c*(c-1+d) + e << endl;
  }
}
