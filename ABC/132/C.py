n = int(input())

d = list(map(int, input().split()))

d.sort()

c = int(n / 2 - 1)

print(d[c+1] - d[c])
