#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <numeric>
#include <vector>
#include <queue>
#include <map>
typedef unsigned long long ull;
typedef long long ll;
#define MAX 200005
#define __TRUE "Yes"
#define __FALSE "No"
using namespace std;

int main() {
  int a,b,c,d;
  cin >> a >> b >> c >> d;
  if(abs(a-c)<=d || (abs(a-b)<=d && abs(b-c)<=d) ) {
    cout << __TRUE << endl;
  }else {
    cout << __FALSE << endl;
  }
  return 0;
}
