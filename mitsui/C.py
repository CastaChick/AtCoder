import sys

x = int(input())

if x < 2100:
    n = x // 100
    c = x - n * 100
    if c <= 5 * n:
        print(1)
    else:
        print(0)

    sys.exit(0)

print(1)
