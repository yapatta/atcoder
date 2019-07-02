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
  int x;
  cin >> x;
  int max=1;
  for(int num=2;num*num<=x;num++) {
    int sqN=num*num;
    while(sqN<=x) {
      if(max<sqN) {
        max=sqN;
      }
      sqN *= num;
    }
  }
  cout << max << endl;
  return 0;
}
