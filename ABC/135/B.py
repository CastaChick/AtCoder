n = int(input())
p = list(map(int, input().split()))

ans = 0

for (i, j) in enumerate(p):
    if not i + 1 == j:
        ans += 1

if ans == 0 or ans == 2:
    print('YES')
else:
    print('NO')
