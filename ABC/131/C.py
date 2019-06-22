def gcd(x, y):
    if x < y:
        tmp = y
        y = x
        x = tmp
    while y != 0:
        x = x % y
        temp = y
        y = x
        x = temp
    return int(x)

def lcm(x, y):
    return int(x * y / gcd(x, y))

a, b, c, d = map(int, input().split())

x = lcm(c, d)

A = a-1 - (a - 1) // c - (a - 1) // d + (a - 1) // x
B = b - b // c - b // d + b // x

print(int(B - A))
