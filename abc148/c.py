def gcd(a, b):
    if b == 0:
        return a
    return gcd(b, a%b)

def lcm(a, b):
    return (a // gcd(a,b)) * b

A, B = map(int, input().split())
print(lcm(A,B))
