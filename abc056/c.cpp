#include <bits/stdc++.h>
typedef long long ll;
#define reps(i,s,n) for(int (i)=(s);(i)<(n);++(i))
#define rep(i,n) reps(i,0,n)
#define reptr(i,n) for(int (i)=(n);(i)>=0;--(i))
using namespace std;

int main() {
  ll x;
  cin >> x;
  ll count=0,sum=0;
  while(sum<x){
    count++;
    sum+=count;
  }
  cout << count << endl;
}
