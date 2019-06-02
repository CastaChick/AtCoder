n, a, b, c, d = map(int, input().split())

S = input()
x = [0]

for s in S:
    if s == '#':
        x.append(1)
    else:
        x.append(0)

flag = 0

for i in range(a, c):
    if x[i] + x[i+1] == 2:
        flag = 1
for i in range(b, d):
    if x[i] + x[i+1] == 2:
        flag = 1

flag2 = 1

if c > d:
    for i in range(b-1, d):
        if x[i] + x[i+1] + x[i+2] == 0:
            flag2 = 0
else:
    flag2 = 0

if flag + flag2 == 0:
    print('Yes')
else:
    print('No')
