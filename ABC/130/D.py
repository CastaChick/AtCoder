n, k = map(int, input().split())
A = list(map(int, input().split()))

ans = 0

right = 0
now = 0

for left in range(n):
    while now < k:
        if right == n:
            break
        now += A[right]
        right += 1

    if now < k:
        break

    ans += n - right + 1
    now -= A[left]

print(ans)

