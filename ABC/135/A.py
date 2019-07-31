a, b = map(int, input().split())

if a % 2 == b % 2:
    print(int((a + b)/2))
else:
    print("IMPOSSIBLE")
