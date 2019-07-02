#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
int main() {
  string S;
  cin >> S;

  if( (S[0]==S[1]&&S[1]==S[2])||(S[1]==S[2]&&S[2]==S[3]) ) cout << "Yes" << endl;
  else cout << "No" << endl;
}
