#include <cstdio>
#include <cmath>
using namespace std;
struct point{double x, y;};
void koch(int i, point a, point b);
void nuMber(int n, int a);
int main() {
  int n;
  point a, b;
  scanf("%d", &n);
  a.x = 0, a.y = 0;
  b.x = 100, b.y = 0;
  nuMber(n, 2);
  printf("%.8f %.8f\n", a.x, a.y);
  koch( n, a, b);
  printf("%.8f %.8f\n", b.x, b.y);
  return 0;
}
void koch(int n, point a, point b) {
  if(n == 0) return;
  point s, t, u;
  double th = M_PI * 60.0 / 180.0;

  s.x = (2*a.x+b.x) / 3;
  s.y = (2*a.y+b.y) / 3;
  t.x = (a.x+2*b.x) / 3;
  t.y = (a.y+2*b.y) / 3;
  u.x = s.x + (t.x-s.x)*cos(th) - (t.y-s.y)*sin(th);
  u.y = s.y + (t.y-s.y)*cos(th) + (t.x-s.x)*sin(th);
  koch(n-1, a, s);
  printf("%.8f %.8f\n", s.x, s.y);
  koch(n-1, s, u);
  printf("%.8f %.8f\n", u.x, u.y);
  koch(n-1, u, t);
  printf("%.8f %.8f\n", t.x, t.y);
  koch(n-1, t, b);
}
void nuMber(int n, int a) {
  if(n == 0) {
    printf("%d\n", a);
    return;
  }
  nuMber(n-1, 4*a-3);
}
