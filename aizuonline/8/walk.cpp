#include <iostream>
using namespace std;
#define NIL -1
struct Node{int p, l, r;};
Node A[30];

void preorder(int u);
void inorder(int u);
void postorder(int u);

int main() {
  int n, i, node, l, r;
  cin >> n;
  //初期化
  for(i = 0; i < n; i++) A[i].p = A[i].l = A[i].r = NIL;
  for (i = 0; i < n; i++) {
    cin >> node;
    cin >> A[node].l >> A[node].r;
    if(A[node].l != NIL) A[A[node].l].p = node;
    if(A[node].r != NIL) A[A[node].r].p = node;
  }
  int first = 0;
  for (i = 0; i < n; i++) {
    if(A[i].p == NIL) {
      first = i;
      break;
    }
  }
  cout << "Preorder" << endl;
  preorder(first);
  cout << endl;

  cout << "Inorder" << endl;
  inorder(first);
  cout << endl;

  cout << "Postorder" << endl;
  postorder(first);
  cout << endl;
  return 0;
}
//初期状態 preorder(0);
void preorder(int u) {
  if(u == NIL) return;
  cout << " " << u;
  preorder(A[u].l);
  preorder(A[u].r);
}
void inorder(int u) {
  if(u == NIL) return;
  inorder(A[u].l);
  cout << " " << u;
  inorder(A[u].r);
}
void postorder(int u) {
  if(u == NIL) return;
  postorder(A[u].l);
  postorder(A[u].r);
  cout << " " << u;
}
