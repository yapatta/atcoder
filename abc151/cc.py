N, M = map(int, input().split())

accepted = [False] * N
wa = [0] * N

for i in range(M):
    p, s = input().split()
    p = int(p)
    p -= 1

    if s == 'WA':
        if not accepted[p]:
            wa[p] += 1

    if s == 'AC':
        accepted[p] = True

ac_sum = 0
wa_sum = 0
for i in range(N):
    if accepted[i]:
        ac_sum += 1
        wa_sum += wa[i]

print(ac_sum, wa_sum)
