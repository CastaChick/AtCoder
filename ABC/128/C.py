import numpy as np

def add1(s, i = -1):
    if s[i] == 0:
        s[i] = 1
        return s
    else:
        s[i] = 0
        return add1(s, i-1)
    
n, m = map(int, input().split())

k = []
s = []

for i in range(0, m):
    ki, *si = map(int, input().split())
    k.append(ki)
    s.append(si)

p = list(map(int, input().split()))

sw = np.zeros(n)

ons = 0
ans = 0
sums = 0

for i in range(0, 2**n):
    for j in range(0, m):
        for l in s[j]:
            ons += sw[l-1]
        if ons % 2 == p[j]:
            sums += 1
        ons = 0
    if sums == m:
        ans += 1
    sums = 0
    if i != 2**n - 1:
        sw = add1(sw)


print(ans)
