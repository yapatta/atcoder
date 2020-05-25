K = int(input())
A, B = map(int, input().split())
left = (A + K - 1) // K
right = B // K
print("OK") if left <= right else print("NG") 
