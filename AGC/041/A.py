n, a, b = map(int, input().split())

if (b - a) % 2 == 0:
    print((b - a)//2)

else:
    print(int(min(a-1, n-b) + 1 + (b - a)//2))
