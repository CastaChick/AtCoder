import numpy as np

n = int(input())

A = []

for i in range(n):
    A.append(list(map(int, input().split())))

A = np.array(A)

X = np.eye(n, k = 1, dtype = int)
X[n-1, 0] = 1

B = []
a = np.copy(A)

for i in range(n-1):
    a = np.dot(X, a)
    B.append(A - a)

B = np.array(B)

B = np.reshape(B, (-1, 2))

B = B[np.argsort(B[:, 1])]
B = B[np.argsort(B[:, 0])]

c = 1
max_cont = 1
for i in range(1, B.shape[0]):
    if B[i][0] == B[i-1][0] and B[i][1] == B[i-1][1]:
        c += 1
    elif c > max_cont:
        max_cont = c
        c = 1
    else:
        c = 1

if n == 1:
    print(1)
else:
    print(n - max_cont)
