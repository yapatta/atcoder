#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define reps(i,s,n) for(ll (i)=(s);(i)<(n);++(i))
#define rep(i,n) reps(i,0,n)
#define reptr(i,n) for(ll (i)=(n);(i)>=0;--(i))
#define All(x) (x).begin(),(x).end()
const ll MOD=1e9+7;
using namespace std;

int N;
int g[4];
int num=0;
void numOk(int count,int i, int loca);

int main(){
  cin >> N;
  while(true){
    bool decid=true;
    rep(i,3){
      cin >> g[i];
      if(g[i]==N){
        decid=false;
        break;
      }
    }
    if(decid) break;
  }
  sort(g,g+3);
  g[3]=N;
  numOk(0,0,0);
  if(num>0) cout << "YES" << endl;
  else cout << "NO" << endl;
}

void numOk(int count,int i, int loca){
  if(i==3){
    count+=(N-loca)/3+(N-loca)%3;
    if(count<=100){
      cout << count << endl;
      num++;
    }
    return;
  }
  int tmp1=g[i]+1;
  if(tmp1!=g[i+1]){
    int tmpC = ( (tmp1-loca)/3+(tmp1-loca)%3 );
    if()
    numOk(tmpC,i+1,tmp1);
  }
  int tmp2=g[i]+2;
  if(tmp2!=g[i+1]){
    int tmpC2 = ( (tmp2-loca)/3+(tmp2-loca)%3 );
    numOk(tmpC2,i+1,tmp2);
  }
}
