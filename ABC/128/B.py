n = int(input())

X = []

for i in range(0, n):
    s, p = input().split()
    p = int(p)
    X.append([s, -p, i])

X.sort()

for i in range(0, n):
    print(X[i][2] + 1)
