#include <bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
#define __TRUE "Yes"
#define __FALSE "No"
#define cout(x) cout << (x) << endl
#define MAX 100001
using namespace std;

int main() {
  ll N;
  string S;
  cin >> N >> S;
  vector<ll> W(N),E(N);
  W[0]=0;
  for(int i=0;i<N-1;i++) {
    int west=0;
    if(S[i]=='W') west++;
    W[i+1] = W[i] + west;
  }

  E[N-1]=0;
  for(int i=N-1;i>0;i--) {
    int east=0;
    if(S[i]=='E') east++;
    E[i-1] = E[i] + east;
  }
  vector<ll> ANS(N);
  for(int i=0;i<N;i++) {
    ANS[i]= (E[i]+W[i]);
  }
  sort(ANS.begin(),ANS.end());
  cout << ANS[0] << endl;
}
