def dp(i, j, memo):
    key = "{}.{}".format(i, j)

    if i == 1:
        memo[key] = 1
        return memo[key]

    if key in memo:
        return memo[key]

    if j == 0:
        memo[key] = dp(i-1, j, memo) + dp(i-1, j+1, memo)
        return memo[key]

    if j == 9:
        memo[key] = dp(i-1, j-1, memo) + dp(i-1, j, memo)
        return memo[key]

    memo[key] = dp(i-1, j-1, memo) + dp(i-1, j, memo) + dp(i-1, j+1, memo)
    return memo[key]


k = int(input())
memo = {"1.0": 0}

num = 0

i = 1
j = 0

while(num < k):
    j += 1
    j %= 10
    if j == 0:
        i += 1
    else:
        num += dp(i, j, memo)

p = k - num + dp(i, j, memo)
ans = [j]
for l in range(1, i):
    n = 0
    x = max(-1, ans[-1] - 2)
    while n < p and x < 10:
        x += 1
        n += dp(i-l, x, memo)
    ans.append(x)
    p = p - n + dp(i-l, x, memo)

print("".join(map(str, ans)))
