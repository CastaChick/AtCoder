import numpy as np

h, w, k = map(int, input().split())

cake = np.zeros((h, w))

for i in range(h):
    inputline = input()
    for j in range(w):
        if inputline[j] == ".":
            cake[i][j] = 0
        else:
            cake[i][j] = 1

s = np.sum(cake, axis=1)
first = 0
for i in range(h):
    if s[i]:
        first = i
        break

ans = np.zeros((h, w), dtype=np.uint64)
num = 1

for i in range(h):
    flag = 0
    if not s[i]:
        continue
    for j in range(w):
        if cake[i][j] and flag:
            num += 1
        elif cake[i][j]:
            flag += 1
        ans[i][j] = num
    num += 1

for i in range(h):
    if s[i] == 0 and i == 0:
        ans[i] = ans[first]
    elif s[i] == 0:
        ans[i] = ans[i-1]

for i in range(h):
    print(' '.join(map(str, ans[i])))
