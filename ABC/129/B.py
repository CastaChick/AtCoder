n = int(input())
w = list(map(int, input().split()))
W = sum(w)
B = sum(w)
a = [W]

for i in range(n):
    W -= w[i]
    a.append(abs(W - (B - W)))

print(min(a))
