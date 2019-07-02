#include <iostream>
#include <queue>

using namespace std;
typedef long long li;
//queueで実装
//queue<int>でqueue生成
//int top = queue.front();
//queue.pop(); 取り出したqueueは用済み
//while top < n
//topが3&&5&&7がそれぞれ1個以上ならcounter++
//top=top*10;
//queue.push(top+3),queue.push(top+5),queue.push(top+7)
bool stgNu(li n);
li kaiZyo(li n);

int main(void) {
  li n;
  cin >> n;
  li kai;
  kai = kaiZyo(n);

  return 0;
}
li kaiZyo(li n) {
  if(n == 1) return 1;
  return n*kaiZyo(n-1);
}
bool stgNu(li n) {
  int counter = 0;
  for (li i = 2; i < n; i++) {
    if(n % i == 0) {
      counter++;
      
    }
  }
}
