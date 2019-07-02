#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <string>
using namespace std;
typedef unsigned long long ull;
typedef long long ll;

string makeL(string before);
int main() {
  int n;
  ull x;
  cin >> n >> x;
  string nBurger = "P";
  for (int i = 0; i < n; i++) {
    nBurger = makeL(nBurger);
  }
  int counter = 0;
  for (ull i = 0; i < x; i++) {
    if(nBurger[i] == 'P')
      counter++;
  }
  cout << counter << endl;
  return 0;
}
string makeL(string before) {
  string next;
  next = "B";
  next += before;
  next += "P";
  next += before;
  next += "B";
  return next;
}
