import numpy as np
k, s = map(int, input().split())
ans = 0

for z in range(k+1):
    for y in range(k+1):
        if 0 <= s - z - y <= k:
            ans += 1

print(ans)
