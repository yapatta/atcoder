#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define reps(i,s,n) for(int (i)=(s);(i)<(n);++(i))
#define rep(i,n) reps(i,0,n)
#define reptr(i,n) for(int (i)=(n);(i)>=0;--(i))
#define All(x) (x).begin(),(x).end()
const ll MOD=1e9+7;
using namespace std;

int num[100005]={};
int main(){
  int N;
  cin >> N;
  rep(i,N){
    int a;
    cin >> a;
    num[a]++;
  }
  int sum=0;
  for(int i=0;i<=100000-2;i++){
    sum=max(sum,num[i]+num[i+1]+num[i+2]);
  }
  cout << sum << endl;
}
