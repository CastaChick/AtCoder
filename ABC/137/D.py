n, m = map(int, input().split())

works = []

for i in range(n):
    a, b = map(int, input().split())
    if b > m:
        continue
    works.append([a, b])
