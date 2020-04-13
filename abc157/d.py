class UnionFind():
    def __init__(self, n):
        self.n = n
        self.parents = [-1] * n

    def root(self, x):
        if self.parents[x] < 0:
            return x
        else:
            self.parents[x] = self.root(self.parents[x])
            return self.parents[x]

    def unite(self, x, y):
        x = self.root(x)
        y = self.root(y)

        if x == y:
            return

        if (-self.parents[x]) < (-self.parents[y]):
            self.parents[y] += self.parents[x]
            self.parents[x] = y
        else:
            self.parents[x] += self.parents[y]
            self.parents[y] = x

    def size(self, x):
        return -self.parents[self.root(x)]

    def same(self, x, y):
        return self.root(x) == self.root(y)

N, M, K = map(int,input().split())

uf = UnionFind(N)
friends = [0] * N
blocks = [0] * N

for _ in range(M):
    a, b = map(int, input().split())
    a -= 1
    b -= 1
    uf.unite(a, b)
    friends[a] += 1
    friends[b] += 1

for _ in range(K):
    c, d = map(int, input().split())
    c -= 1
    d -= 1
    if uf.same(c, d):
        blocks[c] += 1
        blocks[d] += 1

for i in range(N):
    print(uf.size(i) - friends[i] - blocks[i] - 1, end=" ")
print("")
