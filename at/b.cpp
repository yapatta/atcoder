#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
#include <string>
#include <sstream>

using namespace std;

int main(void) {
  string s;
  cin >> s;
  int min = 1000;
    for (int j = 0; j < s.size(); j++) {
      string x = s.substr(j,3);
      int xx = stoi(x);
      int f = (xx-753)>0 ? xx-753:753-xx;
      if(f < min) {
        min = f;
      }
    }
  cout << min << endl;
  return 0;
}
