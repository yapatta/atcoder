//abc3文字を使った辞書順すべて書き出す
#include <iostream>
#include <queue>
#include <algorithm>
#include <string>
using namespace std;
int N;
queue<string> s;
void makeWords(string a, int k);
void putsWords();
int main() {
  scanf("%d", &N);
  makeWords("", 0);
  putsWords();
  return 0;
}
void makeWords(string a, int k) {
  if(a.size() == N) {
    s.push(a);
    return;
  }
  makeWords(a + "a", k+1);
  makeWords(a + "b", k+1);
  makeWords(a + "c", k+1);
}
void putsWords() {
  while(1) {
    if(s.empty()) return;
    cout << s.front() << endl;
    s.pop();
  }
}
