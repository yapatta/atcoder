#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

int main() {
  string in;
  cin >> in;
  int a[4]={in[0]-'0',in[1]-'0',in[2]-'0',in[3]-'0'};
  int n=3;
  for(int bit=0;bit< (1<<n);bit++) {
    int ans=a[0];
    string temp;
    for(int i=0;i<n;i++) {
      if( (1<<i)&bit) {
        ans += a[i+1];
        temp += "+";
      }else{
        ans -= a[i+1];
        temp += "-";
      }
    }
    if(ans==7) {
      cout << a[0] << temp[0] << a[1] << temp[1] << a[2] << temp[2] << a[3] << "=7" << endl;
      return 0;
    }
  }
}
