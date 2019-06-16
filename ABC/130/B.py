n, x = map(int, input().split())

L = list(map(int, input().split()))

ans = 0
a = 0
for i in L:
    if a <= x:
        ans += 1
    a += i

if a <= x:
    ans += 1

print(ans)

