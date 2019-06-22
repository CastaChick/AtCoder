import sys
n, k = map(int, input().split())

if (n - 1)*(n - 2) / 2 < k:
    print(-1)
    sys.exit()

li = []

for i in range(1, n+1):
    for j in range(i+1, n+1):
        li.append([i, j])

max_k = int(n * (n - 1) / 2)

M = max_k - k

print(M)

for i in range(M):
    print(li[i][0], li[i][1])
