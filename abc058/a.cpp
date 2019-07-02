#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int a,b,c;
  string mess;
  cin >> a >> b >> c;
  if(b-a==c-b) {
    mess="YES";
  }else{
    mess="NO";
  }
  cout << mess << endl;
}
