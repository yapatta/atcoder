#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
  int n,x;
  cin >> n >> x;
  cout << ((n-x<x-1)?n-x:x-1) << endl;
}
