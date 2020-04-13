import sys
N, M = map(int, input().split())

ans = [0] * N
if N > 1:
    ans[0] = 1

canChange = [True] * N

for i in range(M):
    s,c = map(int, input().split())
    s -= 1

    if canChange[s]:
        ans[s] = c
        canChange[s] = False
    elif ans[s] != c:
        print(-1)
        sys.exit()

if len(ans) != 1 and ans[0] == 0:
    print(-1)
    sys.exit()

print("".join(map(str,ans)))
