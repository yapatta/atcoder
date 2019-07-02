#include <iostream>
using namespace std;
#define NIL -1
struct Node{int p, l, r;}; // parent, left, right
Node A[30];
int D[30];

void getDepth(int u, int depth);
int getHeight(int u);
void print(int u);

int main() {
  int i, node;
  int n;
  cin >> n;
  for(i = 0;i < n; i++) {
    A[i].p = A[i].l = A[i].r = D[i] = NIL;
  }
  for (i = 0; i < n; i++) {
    cin >> node;
    cin >> A[node].l >> A[node].r;
    A[A[node].l].p = A[A[node].r].p = node;
  }
  int top;
  for (i = 0; i < n; i++) {
    if(A[i].p == NIL) {
      top = i;
      break;
    }
  }
  getDepth(top, 0);
  getHeight(n);
  for (i = 0; i < n; i++) {
    print(i);
  }
  return 0;
}

void getDepth(int u, int depth) {
  D[u] = depth;
  if(A[u].r != NIL) getDepth(A[u].r , depth+1);
  if(A[u].l != NIL) getDepth(A[u].l, depth+1);
}

int getHeight(int u) {
  int h1 = -1, h2 = -1;
  if(A[u].l != NIL) h1 = getHeight(A[u].l);
  if(A[u].r != NIL) h2 = getHeight(A[u].r);
  return max(h1, h2) + 1;
}


void print(int u) {
  cout << "node " << u << ": " << "parent = " << A[u].p;

  cout << ", sibling = ";
  if(A[u].p == NIL) cout << -1;
  else if(A[A[u].p].r != u) cout << A[A[u].p].r;
  else if(A[A[u].p].l != u) cout << A[A[u].p].l;

  cout << ", degree = ";
  if(A[u].l != NIL && A[u].r != NIL) cout << 2;
  else if(A[u].l != NIL || A[u].r != NIL) cout << 1;
  else cout << 0;

  cout << ", depth = " << D[u];
  cout << ", height = " << getHeight(u) << ", ";

  if(A[u].p == NIL) cout << "root";
  else if(A[u].l == NIL && A[u].r == NIL) cout << "leaf";
  else cout << "internal node";
  cout << endl;
}
