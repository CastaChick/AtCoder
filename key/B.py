S = input()

P = "keyence"
a = 0
c = 0

i = 0
j = 0

while i < 7 and j < len(S):
  if S[j] == P[i]:
    i += 1
    a = 0
  elif a == 0:
    a = 1
    c += 1
  j += 1

if c == 0 and i == 7:
  print("YES")
elif c == 1 and j == len(S) and i == 7:
  print("YES")
else:
  print("NO")
