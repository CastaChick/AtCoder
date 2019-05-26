n, k = map(int, input().split())

V = list(map(int, input().split()))

I = []

for i in range(0, n+1):
    for j in range(0, n+1-i):
        I.append([i, j])

Vr = V[::-1]

maxi = 0

for l in I:
    H = V[0:l[0]] + Vr[0:l[1]]
    H.sort()
    t = len(H)
    re = k - t
    c = 0
    
    sums = sum(H)
    if maxi < sums:
        maxi = sums


