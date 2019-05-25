N, M = map(int, input().split())

A = [int(i) for i in input().split()]

X = []

for i in range(0, M):
    B, C = map(int, input().split())
    X.append([C, B])

X.sort(reverse=True)

A.sort()

index = 0
l = 0
a = 0
k = X[a][0]

while index < N and a < M and A[index] < k:
    A[index] = k;
    index += 1;
    l += 1;
    if(l == X[a][1]):
        a += 1
        if a >= M:
            break
        k = X[a][0]
        l = 0

print(sum(A))
