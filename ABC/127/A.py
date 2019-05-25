y, c = map(int, input().split())

if y <= 5:
    c = 0
elif y <= 12:
    c = c // 2

print(c)
