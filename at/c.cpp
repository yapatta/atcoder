#include <iostream>
#include <queue>

using namespace std;
//queueで実装
//queue<int>でqueue生成
//int top = queue.front();
//queue.pop(); 取り出したqueueは用済み
//while top < n
//topが3&&5&&7がそれぞれ1個以上ならcounter++
//top=top*10;
//queue.push(top+3),queue.push(top+5),queue.push(top+7)
bool stgExist(long x);
int main(void) {
  int n;
  cin >> n;
  queue<int> a;
  a.push(0);
  int counter = 0;
  while(true) {
    long top = a.front();
    if(top > n) break;
    a.pop();
    if(stgExist(top))
      counter++;
    top *= 10;
    a.push(top+3);
    a.push(top+5);
    a.push(top+7);
  }
  cout << counter << endl;
  return 0;
}
bool stgExist(long x) {
  int a = 0, b = 0,c = 0;
  while(x > 0) {
    if(x % 10 == 3) a++;
    if(x % 10 == 5) b++;
    if(x % 10 == 7) c++;
    x /= 10;
  }
  if(a > 0 && b > 0 && c > 0) return true;
  else return false;
}
