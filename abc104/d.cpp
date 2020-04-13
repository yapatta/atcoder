#include <bits/stdc++.h>
using namespace std;
using ll = long long;
template<int MOD> struct Fp {
    long long val;
    constexpr Fp(long long v = 0) noexcept : val(v % MOD) {
        if (val < 0) val += MOD;
    }
    constexpr int getmod() { return MOD; }
    constexpr Fp operator - () const noexcept {
        return val ? MOD - val : 0;
    }
    constexpr Fp operator + (const Fp& r) const noexcept { return Fp(*this) += r; }
    constexpr Fp operator - (const Fp& r) const noexcept { return Fp(*this) -= r; }
    constexpr Fp operator * (const Fp& r) const noexcept { return Fp(*this) *= r; }
    constexpr Fp operator / (const Fp& r) const noexcept { return Fp(*this) /= r; }
    constexpr Fp& operator += (const Fp& r) noexcept {
        val += r.val;
        if (val >= MOD) val -= MOD;
        return *this;
    }
    constexpr Fp& operator -= (const Fp& r) noexcept {
        val -= r.val;
        if (val < 0) val += MOD;
        return *this;
    }
    constexpr Fp& operator *= (const Fp& r) noexcept {
        val = val * r.val % MOD;
        return *this;
    }
    constexpr Fp& operator /= (const Fp& r) noexcept {
        long long a = r.val, b = MOD, u = 1, v = 0;
        while (b) {
            long long t = a / b;
            a -= t * b; swap(a, b);
            u -= t * v; swap(u, v);
        }
        val = val * u % MOD;
        if (val < 0) val += MOD;
        return *this;
    }
    constexpr bool operator == (const Fp& r) const noexcept {
        return this->val == r.val;
    }
    constexpr bool operator != (const Fp& r) const noexcept {
        return this->val != r.val;
    }
    friend constexpr ostream& operator << (ostream &os, const Fp<MOD>& x) noexcept {
        return os << x.val;
    }
    friend constexpr Fp<MOD> modpow(const Fp<MOD> &a, long long n) noexcept {
        if (n == 0) return 1;
        auto t = modpow(a, n / 2);
        t = t * t;
        if (n & 1) t = t * a;
        return t;
    }
};

const int MOD = 1e9+7;
using mint = Fp<MOD>;

signed main() {
	string S;
	cin >> S;
	int N = (int)S.size();
	// i番目まで見て, 0: 左が決まっていない, 1: Aが決まった, 2: Bが決まった, 3: Cが決まった
	vector<vector<mint>> dp(N+1, vector<mint>(4, 0));

	// 初期化
	dp[0][0] = 1;
	for(int i=1;i<=N;i++) {
		if(S[i-1] == '?') {
			for(int j=0;j<=3;j++) {
				dp[i][j] += (mint(3) * dp[i-1][j]);
			}
		} else {
			for(int j=0;j<=3;j++) {
				dp[i][j] += dp[i-1][j];
			}
		}
		if(S[i-1] == 'A' || S[i-1] == '?') dp[i][1] += dp[i-1][0];
		if(S[i-1] == 'B' || S[i-1] == '?') dp[i][2] += dp[i-1][1];
		if(S[i-1] == 'C' || S[i-1] == '?') dp[i][3] += dp[i-1][2];
	}
	cout << dp[N][3] << endl;
}
