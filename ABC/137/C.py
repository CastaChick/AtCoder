import collections
import math


n = int(input())

inputlist = []

for i in range(n):
    inputlist.append("".join(sorted(list(input()))))

counter = collections.Counter(inputlist)

counter = dict(counter)
valuelist = list(map(int, counter.values()))

ans = 0

for i in valuelist:
    if i == 1:
        continue
    if i == 2:
        ans += 1
        continue
    temp = math.factorial(i)
    temp /= math.factorial(i-2)
    temp = int(temp / 2)
    ans += temp

print(ans)
