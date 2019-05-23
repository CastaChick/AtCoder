import math

N, K = map(int, input().split())

prab = 0

for i in range(1, N+1):
    lo = math.log2(K/i)
    if lo < 0:
        lo = 0
    elif lo != int(lo):
        lo += 1

    prab += 1/pow(2., int(lo))

print(prab/N)
