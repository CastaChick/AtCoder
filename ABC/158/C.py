import sys

a, b = map(int, input().split())

for i in range(1010):
    if int(i * 0.08) == a and int(i*0.1) == b:
        print(i)
        sys.exit(0)

print(-1)
