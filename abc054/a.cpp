#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

int main() {
  int a,b;
  string mes;
  cin >> a >> b;
  if(a==1) a += 13;
  if(b==1) b+= 13;
  if(a>b) mes="Alice";
  else if(b>a) mes="Bob";
  else mes="Draw";
  cout << mes << endl;
}
