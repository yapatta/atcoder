#include<bits/stdc++.h>
using namespace std;

int main() {
	int K;
	cin >> K;
	vector<int> fibo(K+5);
	fibo[0] = 1;
	fibo[1] = 2;
	for(int i=2;i<K+5;i++) fibo[i] = fibo[i-1] + fibo[i-2];
	cout << fibo[K] << " " << fibo[K-1] << endl;
}
