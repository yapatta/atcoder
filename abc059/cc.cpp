#include"bits/stdc++.h"
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    long long ans1 = 0, sum1 = 0;

    //先頭が正であるとしたときの答え
    for (int i = 0; i < n; i++) {
        sum1 += a[i];
        if (i % 2 == 0) {
            if (sum1 <= 0) {
                ans1 += -sum1 + 1;
                sum1 = 1;
            }
        } else {
            if (sum1 >= 0) {
                ans1 += sum1 + 1;
                sum1 = -1;
            }
        }
    }

    long long ans2 = 0, sum2 = 0;

    //先頭が負であるとしたときの答え
    for (int i = 0; i < n; i++) {
        sum2 += a[i];
        if (i % 2 == 1) {
            if (sum2 <= 0) {
                ans2 += -sum2 + 1;
                sum2 = 1;
            }
        } else {
            if (sum2 >= 0) {
                ans2 += sum2 + 1;
                sum2 = -1;
            }
        }
    }

    cout << min(ans1, ans2) << endl;
}
