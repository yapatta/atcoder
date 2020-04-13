N, M = map(int, input().split())
AC = set()
wa = [0] * (N+1)

for _ in range(M):
    p, s = input().split()
    p = int(p)
    if not p in AC:
        if s == 'AC':
            AC.add(p)
        if s == 'WA':
            wa[p] += 1

wa_ans = 0
for i in AC:
    wa_ans += wa[i]

print(len(AC), wa_ans)
