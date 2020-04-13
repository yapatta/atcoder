import sys

A = []

for i in range(3):
    A += [int(i) for i in input().split()]

P = [False for _ in range(9)]

isBingo = False

N = int(input())

for _ in range(N):
    b = int(input())
    for i in range(9):
        if A[i] == b:
            P[i] = True


for i in range(3):
    i *= 3
    if P[i] == P[i+1] == P[i+2] == True:
        isBingo = True

for i in range(3):
    if P[i] == P[i+3] == P[i+6] == True:
        isBingo = True

if (P[0] == P[4] == P[8] == True) or (P[2] == P[4] == P[6] == True):
    isBingo = True

if isBingo == True:
    print("Yes")
else:
    print("No")
