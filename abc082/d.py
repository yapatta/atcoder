import sys
MAX = 8000

s = input()
x, y = map(int, input().split())
fn = [ int(len(f)) for f in s.split('T')]

xa = []
ya = []

for i in range(len(fn)):
    if i % 2 == 0:
        xa.append(fn[i])
    else:
        ya.append(fn[i])

xasum = sum(xa)
yasum = sum(ya)

if xasum < abs(x) or yasum < abs(y) or xasum + yasum < abs(x) + abs(y):
    print("No")
    sys.exit(0)

dpx = [False]*(2*MAX+1)
dpy = [False]*(2*MAX+1)

dpx[MAX] = True
dpy[MAX] = True

for i in range(len(xa)):
    dp_tmp = [False]*(2*MAX+1)
    for j in range(2*MAX+1):
        if j + xa[i] <= 2*MAX:
            dp_tmp[j+xa[i]] = dp_tmp[j+xa[i]] or dpx[j]
        if j - xa[i] >= 0 and i > 0:
            dp_tmp[j-xa[i]] = dp_tmp[j-xa[i]] or dpx[j]
    for j in range(2*MAX+1):
        dpx[j] = dp_tmp[j]

for i in range(len(ya)):
    dp_tmp = [False]*(2*MAX+1)
    for j in range(2*MAX+1):
        if j + ya[i] <= 2*MAX:
            dp_tmp[j+ya[i]] = dp_tmp[j+ya[i]] or dpy[j]
        if j - ya[i] >= 0:
            dp_tmp[j-ya[i]] = dp_tmp[j-ya[i]] or dpy[j]
    for j in range(2*MAX+1):
        dpy[j] = dp_tmp[j]

if dpx[MAX+x] and dpy[MAX+y]:
    print("Yes")
else:
    print("No")
