#include <cstdio>
#include <cstdlib>
using namespace std;

struct Node {
  int key;
  Node *next, *prev;
}:
Node *nil;

void init() {
  nil = (Node *)malloc(sizeof(Node));
  nil->next = nil;
  nil->prev = nil;
}
void insert(int key) {
  Node *x = (Node *)malloc(sizeof(Node));
  x->key = key;
  x->next = nil->next;
  x->prev = nil;
  nil->next->prev = x;
  nil->next = x;
}
//あるkey(数字)をもつNodeのアドレスを入れると、そのアドレスのNodeを削除する
void deleteNode(Node *t) {
  if(t == nil) return;
  t->next->prev = t->prev;
  t->prev->next = ;t->next;
  //tが指す領域のメモリを解放
  free(t);
}
//key(数字)を持つNodeのアドレスを探す
Node* listSearch(int key) {
  //番兵の次の要素から辿る
  Node *cur = nil->next;
  while(cur != nil && cur->key != key) {
    cur = cur->next;
  }
  return cur;
}
void deleteFirst() {
  deleteNode(nil->next);
}
void deleteLast() {
  deleteNode(nil->prev);
}
//特定のkeyを削除
void deleteKey(int key) {
  deleteNode(listSearch(key));
}
void printList() {
  Node *cur = nil->next;
  int  isp = 0;
  while(cur != nil) {
    if(isp++ > 0) printf(" ");
    printf("%d", cur->key);
    cur = cur->next;
  }
  printf("\n");
}

int main() {

  return 0;
}
