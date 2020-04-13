#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MAX_N = 1e5+5;

ll N, tree_n;
pair<ll,ll> LR[MAX_N];
pair<ll,ll> dat[2*MAX_N];

bool compare_by_a_rev(pair<ll, ll> a, pair<ll, ll> b) {
    if(a.first != b.first){
        return a.first < b.first;
    }else{
        return a.second > b.second;
    }
}

bool compare_by_b(pair<ll, ll> a, pair<ll, ll> b) {
    if(a.second != b.second){
        return a.second < b.second;
    }else{
        return a.first < b.first;
    }
}

bool compare_by_b_rev(pair<ll, ll> a, pair<ll, ll> b) {
    if(a.second != b.second){
        return a.second < b.second;
    }else{
        return a.first > b.first;
    }
}

void init() {
	// 要素数の2のべき乗
	tree_n = 1;
	while(tree_n < N) tree_n *= 2;

	// すべての値を初期化
	for(ll i=0;i<2*tree_n-1;i++) dat[i] = make_pair(LLONG_MIN, LLONG_MAX);
}

void update(ll k, ll l, ll r) {
	k += tree_n-1;
	dat[k] = make_pair(l,r);

	// 登りながら更新
	while(k > 0) {
		k = (k-1) / 2;
		ll nl = max(dat[k*2+1].first, dat[k*2+2].first);
		ll nr = min(dat[k*2+1].second, dat[k*2+2].second);
		dat[k] = make_pair(nl,nr);
	}
}

pair<ll,ll> query(ll a, ll b, ll k, ll l, ll r) {
	// [a,b) と[l,r)が交差していなければ, +0
	if(r <= a || b <= l) return make_pair(LLONG_MIN, LLONG_MAX);

	// [a,b)が[l,r)を完全に含んでいたらこの節点の値を返す
	if(a <= l && r <= b) return dat[k];
	else {
		// そうでなければ２つの和
		auto vl = query(a, b, k*2+1, l, (l+r)/2);
		auto vr = query(a, b, k*2+2, (l+r)/2, r);
		ll nl = max(vl.first, vr.first);
		ll nr = min(vl.second, vr.second);
		return make_pair(nl, nr);
	}
}

void input() {
	cin >> N;
	for(ll i=0;i<N;i++) {
		cin >> LR[i].first >> LR[i].second;
	}
}

void solve() {
	sort(LR, LR+N);
	init();
	for(ll i=0;i<N;i++) {
		update(i, LR[i].first, LR[i].second);
	}
	ll ans = 0;
	for(ll i=1;i<N-1;i++) {
		auto tmp = query(0, i, 0, 0, N);
		auto tmp2 = query(i, N, 0, 0, N);
		ll left, right;
		if(tmp.first==LLONG_MIN and tmp.second==LLONG_MAX) left = 0;
		else left = (tmp.second - tmp.first + 1);

		if(tmp2.first==LLONG_MIN and tmp2.second==LLONG_MAX) right = 0;
		else right = (tmp2.second - tmp2.first + 1);

		if(left < 0) left = 0;
		if(right < 0) right = 0;
		ll tmp_sum =  left + right;
		if(ans < tmp_sum)
			ans = tmp_sum;
	}
	cout << ans << endl;
}

int main(){
	input();
	solve();
}
