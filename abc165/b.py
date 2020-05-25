X = int(input())
now = 100
cnt = 0
while now < X:
    now *= 1.01
    now = now // 1
    cnt += 1
print(cnt)
