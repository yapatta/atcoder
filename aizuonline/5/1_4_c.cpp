#include <iostream>
#define LEN 100000
using namespace std;

struct P {
	string action;
	string words;
};

bool search(string A[], int n, string key) {
	int i = 0;
	A[n] = key;
	while(A[i] != key) {i++;}
	return i != n; //iとkeyが一致するなら探索失敗
}

int main() {
	int n;
	string s[LEN]; int counter = 0;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		P x;
		cin >> x.action >> x.words;
		if(x.action == "insert") {
			s[counter++] = x.words;
		} else if(x.action == "find") {
			//もし探索成功ならば
			if(search(s, counter, x.words)) {cout << "yes" << endl;}
			else {cout << "no" << endl;}
		}
	}

	return 0;
}