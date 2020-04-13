import sys
alp = "abcdefghijklmnopqrstuvwxyza"

C = input()

for i in range(26):
    if alp[i] == C:
        print(alp[i+1])
        sys.exit()
