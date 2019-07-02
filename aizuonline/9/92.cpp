#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

struct Node {
  int key;
  Node *right, *left, *parent;
};
//初期値はともに0x0(16進数の0)
Node *root, *NIL;

void insert(int k) {
  Node *y=NIL;
  Node *x=root;
  cout << y << " " << x << endl;
  Node *z;

  z=(Node*)malloc(sizeof(Node));
  z->key=k;
  z->left=NIL;
  z->right=NIL;
  cout << y << " " << x << endl;
  while(x != NIL) {
    y=x;
    if(z->key < x->key) {
      x=x->left;
    }else {
      x=x->right;
    }
  }
  z->parent=y;
  if(y==NIL) {
    root=z;
  }else {
    if(z->key < y->key) {
      y->left=z;
    }else {
      y->right=z;
    }
  }
}
void inorder(Node *u) {
  if(u==NIL) return;
  inorder(u->left);
  printf(" %d", u->key);
  inorder(u->right);
}

void preorder(Node *u) {
  if(u==NIL) return;
  printf(" %d", u->key);
  preorder(u->left);
  preorder(u->right);
}

int main() {
  cout << root << " " << NIL << endl;
  int n,i,x;
  string com;
  cin >> n;
  for(i=0;i<n;i++) {
    cin >> com;
    if(com=="insert") {
      cin >> x;
      insert(x);
    } else if(com=="print") {
      inorder(root);
      cout << endl;
      preorder(root);
      cout << endl;
    }
  }
  return 0;
}
