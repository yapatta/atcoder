#include<bits/stdc++.h>
using namespace std;
using ll = long long;

#define EPS (1e-10)
#define equals(a, b) (fabs((a) - (b)) < EPS )

/* 前方宣言 */
// 点
class Point;
// ベクトル
typedef Point Vector;
// 線分
class Segment;
// 直線
typedef Segment Line;

// 反時計周りCCW
static const int COUNTER_CLOCKWISE = 1;
static const int CLOCKWISE = -1;
static const int ONLINE_BACK = 2;
static const int ONLINE_FRONT = -2;
static const int ON_SEGMENT = 0;


// 点
class Point {
	public:
		double x, y;
		Point() {}
		Point(int x, int y): x(x), y(y) {};

		Point operator + (const Point &p) { return Point(this->x + p.x, this->y + p.y); }
		Point operator - (const Point &p) { return Point(this->x - p.x, this->y - p.y); }
		Point operator * (const double k) { return Point(this->x * k, this->y * k); }
		Point operator / (const double e) { return Point(this->x / e, this->y / e); }
		bool operator == (const Point &p) const  { return fabs(this->x - p.x) < EPS && fabs(this->y - p.y) < EPS; }
		Point& operator = (const Point &p) {
			this->x = p.x;
			this->y = p.y;
			return *this;
		}
};


// 関数群

// ノルム
double norm(Point a) { return a.x * a.x + a.y * a.y; }
// 絶対値
double abs(Point a) { return sqrt(norm(a)); }
// 内積
double dot(Point a, Point b) { return a.x * b.x + a.y * b.y; }
// 外積
double cross(Point a, Point b) { return a.x * b.y - a.y * b.x; }
// 2点間の距離の絶対値
double getDistance(Point a, Point b) { return abs(a - b); }
// ベクトルaとベクトルbの直交判定(原点基準, 直線同士)
bool isOrthogonal(Point a, Point b) { return equals(dot(a, b), 0.0); }
// ベクトルa1->a2, ベクトルb1->b2の直交判定(直線同士)
bool isOrthogonal(Point a1, Point a2, Point b1, Point b2) { return isOrthogonal(a1 - a2, b1 - b2); }
// 2つのベクトルの平行判定
bool isParallel(Point a, Point b) { return equals(cross(a,b), 0.0); }
// ベクトルa1->a2, ベクトルb1->b2の平行判定(直線同士)
bool isParallel(Point a1, Point a2, Point b1, Point b2) { return isParallel(a1 - a2, b1 - b2); }
// 反時計周りCCW
int ccw(Point p0, Point p1, Point p2) {
	Vector a = p1 - p0;
	Vector b = p2 - p0;
	if(cross(a,b) > EPS) return COUNTER_CLOCKWISE;
	if(cross(a,b) < -EPS) return CLOCKWISE;
	if(dot(a,b) < -EPS) return ONLINE_BACK;
	if(norm(a) < norm(b)) return ONLINE_FRONT;
	return ON_SEGMENT;
}
// 線分p1p2と線分p3p4の交差判定
bool intersect(Point p1, Point p2, Point p3, Point p4) {
	return ( ccw(p1, p2, p3) * ccw(p1, p2, p4) <= 0 &&
			ccw(p3, p4, p1) * ccw(p3, p4, p2) <= 0 );
}

// Pointの関数群終了 //

// 線分
class Segment {
	public:
		Point p1, p2;
		Segment() {}
		Segment(Point a, Point b) : p1(a), p2(b) {}
};

// 線分の絶対値
double abs(Segment s) { return abs(s.p1 - s.p2); }
// 2つのベクトル(a.p2-a.p1, b.p2-b.p1)の直交判定
bool isOrthogonal(Segment a, Segment b) { return equals(dot(a.p2 - a.p1, b.p2 - b.p1), 0.0); }
// 2つのベクトルの平行判定
bool isParallel(Segment a, Segment b) { return equals(cross(a.p1 - a.p2, b.p1 - b.p2), 0.0); }
// 点pからの線分sに対する射影
Point project(Segment s, Point p) {
	Vector base = s.p2 - s.p1;
	double r = dot(p - s.p1, base) / norm(base);
	return s.p1 + base * r;
}
// 線分sを対称軸とした点pの線対称の点
Point reflect(Segment s, Point p) { return p + (project(s, p) - p) * 2.0; }
// 直線lと点pの距離
double getDistanceLP(Line l, Point p) { return abs(cross(l.p2 - l.p1, p - l.p1) / abs(l.p2 - l.p1)); }
// 線分sと点pの距離
double getDistanceSP(Segment s, Point p) {
	if(dot(s.p2 - s.p1, p - s.p1) < 0.0) return abs(p - s.p1);
	if(dot(s.p1 - s.p2, p - s.p2) < 0.0) return abs(p - s.p2);
	return getDistanceLP(s, p);
}
// 線分s1と線分s2の交差判定
bool intersect(Segment s1, Segment s2) { return intersect(s1.p1, s1.p2, s2.p1, s2.p2); }
// 線分s1と線分s2の距離
double getDistance(Segment s1, Segment s2) {
	if(intersect(s1,s2)) return 0.0;
	return min(min(getDistanceSP(s1, s2.p1), getDistanceSP(s1, s2.p2)),
			min(getDistanceSP(s2, s1.p1), getDistanceSP(s2, s1.p2)));
}
// 線分s1と線分s2の交点
Point getCrossPoint(Segment s1, Segment s2) {
	Vector base = s2.p2 - s2.p1;
	double d1 = abs(cross(base, s1.p1 - s2.p1));
	double d2 = abs(cross(base, s1.p2 - s2.p1));
	double t = d1 / (d1 + d2);
	return s1.p1 + (s1.p2 - s1.p1) * t;
}

int main() {
	int ax, ay, bx, by;
	cin >> ax >> ay >> bx >> by;
	Segment cut(Point(ax,ay), Point(bx,by));
	int N;
	cin >> N;
	vector<Point> xy(N);
	for(int i=0;i<N;i++) {
		int x, y;
		cin >> x >> y;
		xy[i] = Point(x, y);
	}

	int cnt = 0;
	for(int i=0;i<N;i++) {
		Segment sg(xy[i], xy[(i+1)%N]);
		if(intersect(cut, sg)) {
			cnt++;
		}

	}

	cout << 1 + cnt / 2 << endl;
}
