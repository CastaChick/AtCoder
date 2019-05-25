N, M = map(int, input().split())

L = []
R = []

for i in range(0, M):
    l, r = map(int, input().split())
    L.append(l)
    R.append(r)

ans = min(R) - max(L) + 1
if ans < 0:
    ans = 0

print(ans)
