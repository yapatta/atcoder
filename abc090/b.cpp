#include <bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
#define __TRUE "Yes"
#define __FALSE "No"
#define cout(x) cout << (x) << endl
#define MAX 100001
using namespace std;

int main() {
  int a,b;
  cin >> a >> b;
  int count=0;
  for(int i=a;i<=b;i++) {
    string itos = to_string(i);
    bool flag=true;
    for(int j=0;j<itos.size()/2;j++) {
      if(itos[j] != itos[itos.size()-1-j]) {
        flag=false;
        break;
      }
    }
    if(flag) count++;
  }
  cout << count << endl;
}
