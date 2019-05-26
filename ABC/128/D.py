n, k = map(int, input().split())

V = list(map(int, input().split()))

I = []

for i in range(min(n, k)+1):
    for j in range(min(n, k)-i+1):
        I.append([i, j])

Vr = V[::-1]

maxi = 0

for l in I:
    H = V[0:l[0]] + Vr[0:l[1]]
    H.sort()
    t = min(len(H), k - len(H))
    t = max(0, t)
    minus = sum(s < 0 for s in H)
    score = sum(H[min(minus, t):])
    maxi = max(maxi, score)

print(maxi)

