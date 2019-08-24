import sys


m, d = map(int, input().split())

if d < 22:
    print(0)
    sys.exit(0)

ans = 0
for i in range(22, d+1):
    d1 = i % 10
    d10 = (i - d1)/10
    if 2 < d1*d10 < m+1 and d1 > 1 and d10 > 1:
        ans += 1

print(ans)
