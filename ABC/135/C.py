n = int(input())
a = list(map(int, input().split()))
b = list(map(int, input().split()))

ans = 0

for index, brave in enumerate(b):
    ans += min(a[index] + a[index+1], brave)
    a[index+1] -= max(0, brave - a[index])
    if a[index+1] < 0:
        a[index+1] = 0

print(ans)
