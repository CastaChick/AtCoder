import sys
import numpy as np

mod = int(10e8+7)

n, k = map(int, input().split())
a = np.array(list(map(int, input().split())))

a_ = np.abs(a)
isN = (a!=a_).astype(int)

a = a[np.argsort(a_)[::-1]]
isN = isN[np.argsort(a_)[::-1]]
a_ = np.sort(a_)[::-1]

numN = np.sum(isN)
numP = n-numN

if k==1:
    print(np.max(a))
    sys.exit()

if np.sum(isN[:k])%2==0:
    ans = 1
    for i in range(k):
        ans *= a_[i]
        ans %= mod
    print(int(ans))
    sys.exit()

if not numP:
    ans = 1
    for i in range(1, k+1)[::-1]:
        ans *= -a_[-i]
        ans %= mod

    print(int(ans))
    sys.exit()

maxN = 0
maxP = 0

for i in range(k, n):
    if isN[i]:
        maxN = i
        break

for i in range(k, n):
    if not isN[i]:
        maxP = i
        break

minN = n
minP = n

for i in range(k)[::-1]:
    if isN[i]:
        minN = i
        break

for i in range(k)[::-1]:
    if not isN[i]:
        minP = i
        break

ans_1 = 1

for i in range(k):
    if i == minP:
        if maxN:
            ans_1 *= a_[maxN]
            ans_1 %= mod
        continue

    ans_1 *= a_[i]
    ans_1 %= mod

ans_2 = 1

for i in range(k):
    if i == minN:
        if maxP:
            ans_2 *= a_[maxP]
            ans_2 %= mod
        continue

    ans_2 *= a_[i]
    ans_2 %= mod

print(int(max(ans_1, ans_2)))
