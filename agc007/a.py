h, w = map(int, input().split())
sum = 0
for i in range(h):
    a = input()
    sum += a.count('#')
print("Possible") if sum == h + w - 1 else print("impossible")
