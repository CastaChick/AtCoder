global mod
mod = 10 ** 9 + 7

def mpow(x, n):  # x^nをmod取りながら返す
    ans = 1
    while n != 0:
        if n & 1:
            ans = ans * x % mod
        x = x * x % mod
        n = n >> 1

    return ans

n, k = map(int, input().split())

ai = n - k + 1
print(ai)

for i in range(2, k +1):
    if n - k + 1 < i:
        print(0)
        continue

    ai = ai * (n - k - i + 2) * (k - i + 1) % mod
    ai = ai * mpow(i*(i-1), mod-2) % mod

    print(ai)

