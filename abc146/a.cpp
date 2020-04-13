#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const string mon[] = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};

int main(){
	string s;
	cin >> s;
	int tmp;
	for(int i=0;i<7;i++) {
		if(s == mon[i]) {
			tmp = i+1;
			break;
		}
	}
	cout << 8 - tmp << endl;
}
