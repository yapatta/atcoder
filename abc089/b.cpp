#include <bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
#define __TRUE "Yes"
#define __FALSE "No"
#define cout(x) cout << (x) << endl
#define MAX 100001
using namespace std;

int main() {
  int N,i;
  cin >> N;
  bool four=false;
  for(i=0;i<N;i++) {
    char s;
    cin >> s;
    if(s=='Y') {
      four=true;
      break;
    }
  }
  if(four) cout("Four");
  else cout("Three");
}
