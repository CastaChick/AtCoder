n, k = map(int, input().split())
a = list(map(int, input().split()))

ans1 = 0
for i in range(n):
    for j in range(i+1, n):
        if a[i] > a[j]:
            ans1 += 1

ans2 = 0
for i in a:
    for j in a:
        if i > j:
            ans2 += 1

ans = k * ans1 + k * (k-1) // 2 * ans2
ans %= 10 ** 9 + 7

print(ans)
