import numpy as np

n = int(input())
A = list(map(int, input().split()))

A = np.array(A)

A = np.sort(A)

B = np.copy(A)
if n == 2:
    print(A[1] - A[0])
    print(A[1], A[0])

elif A[0] <= 0 and A[n-1] >= 0:
    for i in range(n-1):
        A[i] = min(A[i], -A[i])

    print(np.sum(A[:-1]) * -1 + A[n-1])

    k = n - 2
    a = B[0]
    while B[k] >= 0:
        print(a, B[k])
        a = a - B[k]
        k -= 1
        if k == 0:
            break

    b = B[n-1]

    while k != 0:
        print(b, B[k])
        b = b - B[k]
        k -= 1

    print(b, a)

elif A[n-1] < 0:
    A[n-1] = A[n-1] - A[n-2]
    A[n-2] = 0
    for i in range(n-1):
        A[i] = min(A[i], -A[i])

    print(np.sum(A[:-1]) * -1 + A[n-1])

    a = B[n-1]
    for i in range(n-1):
        print(a, B[i])
        a = a - B[i]

else:
    A[0] = A[0] - A[1]
    A[1] = 0
    for i in range(n-1):
        A[i] = min(A[i], -A[i])

    print(np.sum(A[:-1]) * -1 + A[n-1])

    k = n - 2
    a = B[0]
    while B[k] >= 0:
        print(a, B[k])
        a = a - B[k]
        k -= 1
        if k == 0:
            break

    b = B[n-1]

    while k != 0:
        print(b, B[k])
        b = b - B[k]
        k -= 1

    print(b, a)
