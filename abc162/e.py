MOD = int(1e9+7)
N, K = map(int, input().split())

count = [0] * (K+1)
ans = 0
for now in range(K, 0, -1):
    count[now] = pow(K // now, N, MOD)
    for j in range(2*now ,K+1, now):
        count[now] -= count[j]
        if count[now] < 0:
            count[now] += MOD
    ans += now * count[now]
print(ans % MOD)
