n, m = map(int, input().split())
x = [int(input()) for i in range(m)]
mod = 1000000007

a = [0] * (n+1)
for i in x:
    a[i] = 1

dp = [1]

if a[1] == 1:
    dp.append(0)
else:
    dp.append(1)

for i in range(2, n+1):
    if a[i] == 1:
        dp.append(0)
    else:
        dp.append(dp[i-1] + dp[i-2])
        dp[i] %= mod

print(dp[n])
