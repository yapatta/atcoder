N = int(input())
X = []
Y = []
hh = []
vec = list()
G = (-1,-1,-1)

for _ in range(N):
    x, y, h = map(int, input().split())
    X.append(x)
    Y.append(y)
    hh.append(h)
    # 高さが1以上の三組を一つ取る(この場合, hi = H - |Xi - Cx| - |Yi - Cy|が成立する)
    if h >= 1:
        G = (x, y, h)

for i in range(0,101):
    for j in range(0,101):
        # 最初にHを固定する
        H = G[2] + abs(G[0] - i) + abs(G[1] - j)
        H = max(H, 0)
        flag = True
        for k in range(N):
            key = H - abs(X[k] - i) - abs(Y[k] - j)
            key = max(key, 0)
            if key != hh[k]:
                flag = False
        # 全てのkについてHが成立するとき, append
        if flag:
            vec.append((i,j,H))

if len(vec) == 1:
    print(vec[0][0], vec[0][1], vec[0][2])
