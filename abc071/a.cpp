#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
int x,a,b;
cin >> x >> a >> b;
bool flag=true;
if(abs(x-a)>abs(x-b) ) flag=false;
if(flag) cout << "A" << endl;
else cout << "B" << endl;
}
