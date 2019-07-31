import numpy as np

s = input()
dp = np.zeros(13, len(s), dtype=int)
ad = np.arange(13)
ad = ad * 10 % 13
b = ad
for i in range(1, 10):
    b = np.vstack((b, (ad+i) % 13))

if s[0] == "?":
    dp[0, 0:10] += 1
else:
    dp[0, int(s[0])] = 1
