S, T = [str(s) for s in input().split()]
A, B = [int(i) for i in input().split()]
U = str(input())

if U == S:
    A -= 1
elif U == T:
    B -= 1

print(A,B)
