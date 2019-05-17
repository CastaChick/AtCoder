def make(N):
  if N == 0:
    return "p"
  else:
    e = make(N-1)
    return "b" + e + "p" + e + "b"

N,x = map(int,input().split())
Sum = 0
s = make(N)

for i in range(0,x):
  if(s[i] == "p"):
    Sum += 1

print (Sum)
