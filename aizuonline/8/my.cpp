#include <iostream>
using namespace std;
#define MAX 100005
#define NIL -1
struct Node{int p, l, r;}; // parent, leftChild, rightSibling
Node A[MAX];
int D[MAX];
//ある値uの深さを再帰的に求める
void getDepth(int u, int depth);
void print(int i);
int main() {
  int i, j, node, key, num, before;
  int n;
  cin >> n;
  for(i = 0;i < n; i++) A[i].p = A[i].l = A[i].r = D[i] = NIL;
  for (i = 0; i < n; i++) {
    cin >> node >> key;
    for (j = 0; j < key; j++) {
      cin >> num;
      if(j == 0) A[node].l = num;
      else A[before].r = num;
      before = num;
      A[num].p = node;
    }
  }
  int top;
  for (i = 0; i < n; i++) {
    if(A[i].p == NIL) {
      top = i;
      break;
    }
  }
  getDepth(top, 0);

  for (i = 0; i < n; i++) {
    print(i);
  }
  return 0;
}

void getDepth(int u, int depth) {
  D[u] = depth;
  if(A[u].r != NIL) getDepth(A[u].r , depth);
  if(A[u].l != NIL) getDepth(A[u].l, depth+1);
}

void print(int u) {
  cout << "node " << u << ": " << "parent = " << A[u].p << ", depth = " << D[u];
  cout << ", ";

  if(A[u].p == NIL) cout << "root";
  else if(A[u].l == NIL) cout << "leaf";
  else cout << "internal node";

  cout << ", [";
  int i, c;
  for (i = 0,c = A[u].l;c != NIL; i++, c = A[c].r) {
    if(i != 0) cout << ", ";
    cout << c;
  }
  cout << "]" << endl;
}
