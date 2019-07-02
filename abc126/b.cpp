#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define reps(i,s,n) for(ll (i)=(s);(i)<(n);++(i))
#define rep(i,n) reps(i,0,n)
#define reptr(i,n) for(ll (i)=(n);(i)>=0;--(i))
#define All(x) (x).begin(),(x).end()
#define Rall(a) (a).rbegin(), (a).rend()
#define vll vector<ll>
#define vi vector<int>
#define pll pair<ll,ll>
#define pi pair<int,int>
#define mp make_pair
#define pb push_back
const ll MOD=1e9+7;
using namespace std;

int dy[]={1,-1,0,0,1,1,-1,-1,0};
int dx[]={0,0,1,-1,1,-1,1,-1,0};

int main(){
	int s;
	cin >> s;
	int a[2];
	int i=1;
	while(s>0){
		a[i--] = s%100;
		s /= 100;
	}

	if( (1<=a[0]&&a[0]<=12) && (1<=a[1]&&a[1]<=12) ){
		cout << "AMBIGUOUS" << endl;
	}else if( (1<=a[0]&&a[0]<=12) ){
		cout << "MMYY" << endl;
	}else if(  (1<=a[1]&&a[1]<=12) ){
		cout << "YYMM" << endl;
	}else if(a[0]==0 || a[1]==0){
		cout << "NA" << endl;
	}else{
		cout << "NA" << endl;
	}
}