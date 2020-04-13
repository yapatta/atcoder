import sys
NOT_ASSIGNED = -1

N, M = map(int, input().split())

arr = [NOT_ASSIGNED for _ in range(N)]

for m in range(M):
    s, c = map(int, input().split())
    # 左からs桁目は配列のN-sに入る
    if arr[N-s] != NOT_ASSIGNED and arr[N-s] != c:
        print(-1)
        sys.exit()
    if N > 1 and s == 1 and c == 0:
        print(-1)
        sys.exit()
    arr[N-s] = c

for n in range(N):
    if arr[n] == NOT_ASSIGNED:
        arr[n] = 0

if arr[N-1] == 0 and N > 1:
    arr[N-1] = 1

ans = 0
for n in range(N):
    ans += arr[n] * pow(10, n)

print(ans)
