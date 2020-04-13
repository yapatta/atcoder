MOD = int(1e9+7)

def gcd(a, b):
    if b == 0:
        return a
    return gcd(b, a%b)

def lcm(a, b):
    return a // gcd(a,b) * b


N = int(input())
A = [int(i) for i in input().split()]

l = 1
for i in range(N):
    l = lcm(l, A[i])

ans = 0
for i in range(N):
    ans += l // A[i]

print(ans % MOD)
