#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

int main() {
  map<string, int> salary;
  salary["John"] = 1400;
  salary["Tom"] = 1000;
  salary["Harry"] = 0;

  int a = salary["John"];
  int b = salary["Tom"];
  int c = salary["Harry"];
  cout << a << endl << b << endl << c << endl;
  return 0;
}
