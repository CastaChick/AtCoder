n = int(input())

ans = 'Good'

a = []

for i in range(4):
    a.append(n%10)
    n //= 10

if a[0] == a[1] or a[1] == a[2] or a[2] == a[3]:
    ans = 'Bad'

print(ans)
