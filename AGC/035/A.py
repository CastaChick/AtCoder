n = int(input())

A = list(map(int, input().split()))

ans = A[0]

for i in range(1, n):
    ans ^= A[i]

if ans == 0:
    print('Yes')

else:
    print('No')

