import numpy as np

h, w, k = map(int, input().split())

area = np.zeros([h, w], dtype=int)

for i in range(h):
    s = input()
    for j in range(w):
        if s[j] == "#":
            area[i, j] = 1


ans = 0

for i in range(2**(h+w)):
    area_ = area.copy()

    for j in range(h+w):
        if ((i >> j) & 1):
            if j < h:
                area_[j, :] = 0
            else:
                area_[:, j-h] = 0
    
    if np.sum(area_) == k:
        ans += 1
print(ans)
