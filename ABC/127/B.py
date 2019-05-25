r, D, x = map(int, input().split())

for i in range(2001, 2011):
  x = x * r - D
  print(x)

