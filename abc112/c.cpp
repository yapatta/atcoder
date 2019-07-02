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
#define MAX 101
using namespace std;

struct point {int x,y,h;};
point C[MAX];
int main() {
  int n;
  cin >> n;
  for(int i=0;i<n;i++) {
    cin >> C[i].x >> C[i].y >> C[i].h;
  }
  point num;
  for(int x=0;x<=100;x++) {
    int h;
    for(int y=0;y<=100;y++) {
      bool flag=true;
      for(int i=1;i<n;i++) {
        h = abs(x-C[i-1].x)+abs(y-C[i-1].y)+C[i-1].h;
        if(C[i-1].h == 0) {
          flag=false;
          break;
        }
        if(h == abs(x-C[i].x)+abs(y-C[i].y)+C[i].h) {
          h=abs(x-C[i].x)+abs(y-C[i].y)+C[i].h;
        } else {
          flag=false;
          break;
        }
        if(flag) {
          num.x=x;
          num.y=y;
          num.h=h;
          break;
        }
      }
    }
  }
  cout << num.x << " " << num.y << " " << num.h << endl;
  return 0;
}
