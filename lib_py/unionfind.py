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


