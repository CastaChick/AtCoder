s = input()

a = []

for i in range(4):
    a.append(s[i])

a.sort()

if a[0] == a[1] and a[2] == a[3] and a[1] != a[2]:
    print('Yes')
else:
    print('No')

