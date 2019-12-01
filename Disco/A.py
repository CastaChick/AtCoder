x, y = map(int, input().split())
prize = [0, 300000, 200000, 100000]
ans = 0

if x <= 3:
    ans += prize[x]
if y <= 3:
    ans += prize[y]

if x == 1 and y == 1:
    ans += 400000

print(ans)
