#include"bits/stdc++.h"
using namespace std;
using ll = int64_t;

int main() {
    ll H, W, N, sr, sc;
    cin >> H >> W >> N >> sr >> sc;
    string S, T;
    cin >> S >> T;

    string dir = "LRUD";
    string r_dir = "RLDU";

    bool ans = true;

    {
        //右に出る
        ll x = sc;
        for (ll i = 0; i < N; i++) {
            if (S[i] == 'R') {
                if (++x > W) {
                    ans = false;
                }
            }
            if (T[i] == 'L' && x > 1) {
                x--;
            }
        }
    }
    {
        //左に出る
        ll x = sc;
        for (ll i = 0; i < N; i++) {
            if (S[i] == 'L') {
                if (--x <= 0) {
                    ans = false;
                }
            }
            if (T[i] == 'R' && x < W) {
                x++;
            }
        }
    }
    {
        //上に出る
        ll y = sr;
        for (ll i = 0; i < N; i++) {
            if (S[i] == 'U') {
                if (--y <= 0) {
                    ans = false;
                }
            }
            if (T[i] == 'D' && y < H) {
                y++;
            }
        }
    }
    {
        //下に出る
        ll y = sr;
        for (ll i = 0; i < N; i++) {
            if (S[i] == 'D') {
                if (++y > H) {
                    ans = false;
                }
            }
            if (T[i] == 'U' && y > 1) {
                y--;
            }
        }
    }

    cout << (ans ? "YES" : "NO") << endl;
}
