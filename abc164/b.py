a, b, c, d = map(int, input().split())

taka = (c+b-1) // b
ao = (a+d-1) // d

print("Yes") if taka <= ao else print("No")
