n , L = map(int, input().split())
taste = 0

if L >= 0:
    taste = L * (n-1) - n + n*(n+1)/2

elif -L >= n:
    taste = L * (n-1) - (n-1) + n*(n-1)/2

else:
    taste = L * n + n*(n+1)/2 - n

print(int(taste))

