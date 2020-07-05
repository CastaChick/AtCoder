def dp(i, memo, cost, n):
    if i != int(i):
        return float("inf")

    if i in memo:
        return memo[i]

    x = float("inf")

    if n < i < n+5:
        print(i)
        x = dp(i+1, memo, cost, n)+cost[3]

    memo[i] = min([dp(i/2, memo, cost, n)+cost[0],
                   dp(i/3, memo, cost, n)+cost[1],
                   dp(i/5, memo, cost, n)+cost[2],
                   dp(i-1, memo, cost, n)+cost[3],
                   x])

    return memo[i]

t = int(input())

for _ in range(t):
    n, a, b, c, d = map(int, input().split())

    memo = {0: 0, 1: d}
    print(dp(n, memo, [a, b, c, d], n))
