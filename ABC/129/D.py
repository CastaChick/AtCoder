import numpy as np
h, w = map(int, input().split())
S = []
for i in range(h):
    S.append(input())

q = [[] for i in range(w)]

sw = []

for i in range(h):
    c = []
    for j in range(w):
        if S[i][j] == '#':
            c.append(j)
            q[j].append(i)
    c.append(w)
    k = []
    p = c[0]
    k += [p] * p
    l = len(c)
    for j in range(1, l):
        k += [0]
        p = c[j] - c[j-1] - 1
        k += [p] * p
    sw.append(k)

sh =[]

for i in range(w):
    c = q[i]
    c.append(h)
    k = []
    p = c[0]
    k += [p] * p
    l = len(c)
    for j in range(1, l):
        k += [0]
        p = c[j] - c[j-1] - 1
        k += [p] * p
    sh.append(k)

sw = np.array(sw)
sh = np.array(sh)
sh = sh.T

x = sw + sh

print(np.amax(x) - 1)
