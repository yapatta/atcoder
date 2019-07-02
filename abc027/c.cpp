#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define reps(i,s,n) for(int (i)=(s);(i)<(n);++(i))
#define rep(i,n) reps(i,0,n)
#define reptr(i,n) for(int (i)=(n);(i)>=0;--(i))
#define All(x) (x).begin(),(x).end()
#define MAX 1005
const ll MOD=1e9+7;
using namespace std;
#include <bits/stdc++.h>
#define REP(i,n) for (int i=0;i<(n);i++)
#define RREP(i,n) for (int i=(n)-1;i>=0;i--)
using namespace std;

int main(){
    ll N;
    cin >> N;
    int depth=0;
    for (ll n=N; n>0; n/=2) depth++;

    ll x=1;
    for (int i=0; ;i++) {
        if ((i+depth)%2==0) x*=2;
        else x=2*x+1;

        if (x>N) {
            string winner = (i%2==1 ? "Takahashi" : "Aoki");
            cout << winner << endl;
            return 0;
        }
    }
}
