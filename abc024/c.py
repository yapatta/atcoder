N, D, K = map(int, input().split())

L = []
R = []
S = []
T = []

for _ in range(D):
    l, r = map(int, input().split())
    L.append(l)
    R.append(r)

for _ in range(K):
    s, t = map(int, input().split())
    if s > t:
        s, t = t, s
    S.append(s)
    T.append(t)

T = [0] * K

for t in T:
    print(t)
