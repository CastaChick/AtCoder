import numpy as np

n, k = map(int, input().split())
mod = 10 ** 9 + 7

ai = n - k + 1
print(ai)
for i in range(2, k +1):
    if n - k + 1 < i:
        print(0)
        continue

    ai = ai * (n - k - i + 2) * (k - i + 1) / (i * (i - 1))
    ai %= mod
    ai = int(ai)

    print(ai)
