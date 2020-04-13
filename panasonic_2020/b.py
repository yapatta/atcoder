H, W = map(int,input().split())
if H != 1 and W != 1:
    print( ((W+1)//2) * ((H+1)//2)  + ((W//2) * (H//2)))
else:
    print(1)
