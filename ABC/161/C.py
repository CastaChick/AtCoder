n, k = map(int, input().split())

if 2*n <= k:
    print(n)

elif n < k:
    print(k-n)

elif n%k == 0:
    print(0)

else:
    n = n%k
    if 2*n <= k:
        print(n)
    else:
        print(k-n)
