#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MAX = 1e5+5;
bool isPrime[MAX+5];
int ok[MAX+5];

void init() {
	for(int i=0;i<MAX;i++) {
		isPrime[i] = true;
		ok[i] = 0;
	}
}

void eratos() {
	isPrime[1] = false;
	for(int key=2;key<MAX;key++) {
		if(isPrime[key] == true) {
			for(int j=2*key;j<MAX;j+=key) {
				isPrime[j] = false;
			}
		}
	}
	for(int key=3;key<MAX;key+=2) {
		if(isPrime[key] == true && isPrime[(key+1)/2] == true) {
			ok[key] = 1;
		}
	}
	for(int key=3;key<MAX;key++) {
		ok[key] = ok[key] + ok[key-1];
	}
}


int main() {
	init();
	eratos();
	int q;
	cin >> q;
	for(int i=0;i<q;i++) {
		int l, r;
		cin >> l >> r;
		cout << ok[r] - ok[l-1] << endl;
	}
}
