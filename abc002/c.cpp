#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

struct Point {
	int x, y;
};

int main() {
	Point a, b, c;
	cin >> a.x >> a.y >> b.x >> b.y >> c.x >> c.y;
	Point ba, ca;
	ba.x = b.x - a.x;
	ba.y = b.y - a.y;
	ca.x = c.x - a.x;
	ca.y = c.y - a.y;

	cout << fixed << setprecision(4) << abs(ca.x*ba.y - ca.y*ba.x) / 2.0 << endl;
}
