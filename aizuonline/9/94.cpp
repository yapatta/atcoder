#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdio>
using namespace std;

struct Node {
  int key;
  Node *right, *left, *parent;
};
Node *root, *NIL;

void insert(int k) {
  Node *y=NIL;
  Node *x=root;
  Node *z;

  z=(Node*)malloc(sizeof(Node));
  z->key=k;
  z->left=NIL;
  z->right=NIL;

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

Node* find(int k) {
  Node *s=root;
  while(s != NIL && s->key != k) {
    if(k < s->key) s = s->left;
    else s = s->right;
  }
  //もし探索失敗したら、s = NIL
  //探索成功したら、s = (とあるNIL以外のポインタ)
  return s;
}
void delete(int k) {
  Node* s = find(k);
  //sが子を持たない場合
  if(s->left == NIL && s->right == NIL) {
    if( (s->parent)->left == s) {
      s = NIL;
      (s->parent)->left = NIL;
    }else {
      s = NIL;
      (s->parent)->right = NIL;
    }
  //sが子を一個だけ持つ場合
  }else if(s->left == NIL || s->right == NIL) {
    if(s->left != NIL) {
      if((s->parent)->left == s) {
        (s->parent)->left = s->left;
        (s->left)->parent = s->parent;
      }else {
        (s->parent)->right = s->left;
        (s->left)->parent = s->parent;
      }
    } else {
      if((s->parent)->left == s) {
        (s->parent)->left = s->right;
        (s->right)->parent = s->parent;
      }else {
        (s->parent)->right = s->right;
        (s->right)->parent = s->parent;
      }
    }//sが子を２つ保つ場合
  }else {

  }
  free(s);
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
    } else if(com=="find") {
      cin >> x;
      Node *t;
      t = find(x);
      if(t != NIL) cout << "yes" << endl;
      else cout << "no" << endl;
    }
  }
  return 0;
}
