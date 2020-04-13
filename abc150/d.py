import sys

N, M = [int(i) for i in input().split()]
A = [int(i) for i in input().split()]

def gcd(a, b):
    if b == 0:
        return a
    return gcd(b, a%b)

def lcm(a, b):
    return (a // gcd(a,b)) * b

tx = 1
for a in A:
    tx = lcm(tx, a)

B = []
for a in A:
    B.append(tx // a)

for b in B:
    if b % 2 == 0:
        print(0)
        sys.exit()

ans = ((M // (tx//2)) + 1) // 2
print(ans)
