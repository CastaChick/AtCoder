import numpy as np
n = int(input())

AB = []

for i in range(n):
    AB.append(list(map(int, input().split())))
AB = sorted(AB)
AB = sorted(AB, key = lambda x: x[1])
AB = np.array(AB)

X = np.cumsum(AB.T[0])
Y = AB.T[1]

Z = Y - X

ans = 'Yes'

for i in Z:
    if i < 0:
        ans = 'No'
        break

print(ans)
