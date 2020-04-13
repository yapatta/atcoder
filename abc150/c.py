import itertools
N = int(input())
P = [ int(i) for i in input().split()]
Q = [ int(i) for i in input().split()]

i = 0
p, q = 0, 0
for v in itertools.permutations(range(1,N+1)):
    if P == list(v):
        p = i
    if Q == list(v):
        q = i
    i += 1

print(abs(p-q))
