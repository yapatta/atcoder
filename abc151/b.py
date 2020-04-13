N, K, M = map(int, input().split())
A = [int(i) for i in input().split()]

sum = 0;
for a in A:
    sum += a

if N * M <= sum + K:
    if N * M <= sum:
        print(0)
    else:
        print(N * M - sum)
else:
    print(-1)
