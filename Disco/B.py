n = int(input())
a = list(map(int, input().split()))

total = sum(a)

minimam = total
left = 0
right = total

for ai in a:
    left += ai
    right -= ai
    if abs(right - left) < minimam:
        minimam = abs(right - left)

print(minimam)
