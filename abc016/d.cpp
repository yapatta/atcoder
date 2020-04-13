#include<bits/stdc++.h>
using namespace std;

const double EPS = 1e-9;
typedef complex<double> P;
#define X real()
#define Y imag()

namespace std{
    bool operator<(const P p1, const P p2){
        return p1.X != p2.X ? p1.X < p2.X : p1.Y < p2.Y;
    }
    P operator+(const P p1, const P p2) { return P(p1.X + p2.X, p1.Y + p2.Y); }
    P operator-(const P p1, const P p2) { return P(p1.X - p2.X, p1.Y - p2.Y); }
    P operator*(const P p, double k) { return P(p.X * k, p.Y * k); }
    P operator/(const P p, double k) { return P(p.X / k, p.Y / k); }
} 

struct Segment{
    P p1, p2;
    Segment() {}
    Segment(P p1, P p2) : p1(p1), p2(p2) {}
};
typedef Segment Segment;

double norm(P &p1, P &p2) { return (p1.X - p2.X) * (p1.X - p2.X) + (p1.Y - p2.Y) * (p1.Y - p2.Y); }
double cross(const P &a, const P &b) { return (conj(a) * b).Y; }
double dot(const P &a, const P &b) { return (conj(a) * b).X; }
int ccw(P a, P b, P c){
    b -= a; c -= a;
    if (cross(b, c) > EPS) return +1;
    else if (cross(b, c) < -EPS) return -1;
    else if (dot(b, c) < -EPS) return +2;
    else if (norm(b) < norm(c)) return -2;
    else return 0;
}
bool intersectSS(const Segment &s, const Segment &t){
    return ccw(s.p1, s.p2, t.p1) * ccw(s.p1, s.p2, t.p2) <= 0 &&
           ccw(t.p1, t.p2, s.p1) * ccw(t.p1, t.p2, s.p2) <= 0;
}

signed main() {
    int ax, ay, bx, by;
    cin >> ax >> ay >> bx >> by;
    Segment cut(P(ax, ay), P(bx, by));

    int N;
	cin >> N;

    vector<P> xy;
    for(int i=0;i<N;i++) {
        int x, y;
        cin >> x >> y;
        xy.emplace_back(P(x, y));
    }

    int cnt = 0;
   	for(int i=0;i<N;i++) {
        P p1 = xy[i];
        P p2 = xy[(i + 1) % N];
        Segment ln(p1, p2);
        cnt += intersectSS(cut, ln);
    }

    cout << 1 + cnt / 2 << endl;

}
