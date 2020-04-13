#include<bits/stdc++.h>
using namespace std;

int main() {
	set<int> s;
	for(int i=0;i<5;i++) s.insert(i);
	auto l = s.lower_bound(1);
	auto r = s.upper_bound(4);
	cout << (l == r) << endl;
}
