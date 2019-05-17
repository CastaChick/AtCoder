N, M = map(int, input().split())
if N < M:
  tmp = N
  N = M
  M = tmp

a = N
b = M

r = a % b

while r > 0:
  a = b
  b = r
  r = a % b

L = N * M / b

S = input()
T = input()
i = 0
j = 0

while j != M and i != N:
  if i * L / N + 1 == j * L / M + 1:
    if S[i] != T[j]:
      L = -1
      break
    i += 1
    j += 1
  elif i * L / N + 1 >= j * L / M + 1:
    j += 1
  else:
    i += 1

print('%d' % L)
