k, x = map(int, input().split())

x = range(x-k+1, x+k)

print(" ".join(map(str, x)))
