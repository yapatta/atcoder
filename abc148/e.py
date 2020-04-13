import sys
N = int(input())

if N % 2 == 1:
    print(0)
    sys.exit()

ans = 0

div = 10
while N >= div:
    ans += N // div
    div *= 5

print(ans)
