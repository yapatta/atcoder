#include <iostream>
#define MAX 105
using namespace std;
int v[MAX],w[MAX];
struct nap {int v,w;};
nap V[MAX];

int main() {
  int N,W;
  cin >> N >> W;
  for(i=0;i<n;i++) {
    cin >> v[i] >> w[i];
  }

  V[0].v=0,V[0].w=0;
  for(i=1;i<n;i++) {
    if(W<V[].w)
    V[i].v=V[i-1].v;
  }

  return 0;
}
