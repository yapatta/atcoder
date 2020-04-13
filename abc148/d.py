N = int(input())
A = [int(i) for i in input().split()]

can = False
cnt = 1
for a in A:
    if a == cnt:
        can = True
        cnt += 1

if can == False:
    print(-1)
else:
    print(N-cnt+1)
