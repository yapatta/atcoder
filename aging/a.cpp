#include <bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
#define MAX 200005
#define __TRUE "Yes"
#define __FALSE "No"
using namespace std;

int main() {
  int N,H,W;
  cin >> N >> H >> W;
  cout << (N-H+1)*(N-W+1) << endl;
}
