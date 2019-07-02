#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
		double W,H,x,y;
		cin >> W >> H >> x >> y;
		double ans;
		bool other = false;
		if(x*2==W and y*2==H){
				other = true;
		}
		printf("%.9f", W*H/2);
		cout << " "<< other << endl;
}
