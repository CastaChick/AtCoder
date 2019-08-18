n = int(input())
v = list(map(int, input().split()))

for i in range(n-1):
    v = sorted(v)
    new = (v.pop(0) + v.pop(0)) / 2.
    v.append(new)

print(v[0])
