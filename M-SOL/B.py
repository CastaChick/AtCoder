S = input()
lose = 0

for s in S:
    if s == 'x':
        lose += 1


if lose < 8:
    print('YES')

else:
    print('NO')
