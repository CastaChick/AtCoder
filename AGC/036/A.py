import sys
s = int(input())
'''
if s == 10**18:
    a = [0, 0]
    b = [0, 10**9]
    c = [10**9, 0]

    print(a[0], a[1], b[0], b[1], c[0], c[1])

    sys.exit()
'''
a = [0, 0]

b = [0, 0]

c = [0, 0]

b[0] = int(s ** 0.5) + 1
c[1] = int(s ** 0.5) + 1

abouts = b[0] * c[1]

c[0] = 1
b[1] = abouts - s

print(a[0], a[1], b[0], b[1], c[0], c[1])
