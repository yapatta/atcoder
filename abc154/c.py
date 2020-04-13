N = int(input())
A = [int(i) for i in input().split()]
s = set()
for a in A:
    s.add(a)

if len(A) == len(s):
    print("YES")
else:
    print("NO")
