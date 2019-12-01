def count_2chr(li):
    ans = [0 for _ in range(10)]
    s = li.copy()
    while len(s) >= 2:
        i = s.pop(0)
        if ans[i] == 0:
            ans[i] = len(set(s))
    
    return sum(ans)

n = int(input())
s = list(map(int, list(input())))

count = [0, 0, 0, 0, 0, 0, 0, 0, 0, 0]

while len(s) >= 3:
    i = s.pop(0)
    if count[i] == 0:
        count[i] = count_2chr(s)

print(sum(count))
