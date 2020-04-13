#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pii = pair<int,int>;
using pll = pair<ll,ll>;
using vi = vector<int>;
using vl = vector<ll>;
#define All(x) (x).begin(),(x).end()
#define RAll(x) (x).rbegin(),(x).rend()


int main(){
	ll x;
	cin >> x;
	ll a = x / 500;
	ll b = (x - 500 * a) / 5;
	cout << a * 1000 + b * 5 << endl;
}
