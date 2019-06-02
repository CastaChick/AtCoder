def serch(s, index, li):
    h = []
    x = len(s) - 4
    for i in li:
        if s[i] + s[i+1] + s[i+2] == 'ABC':
            if 0 < i:
                if s[i-1] == 'A':
                    h.append(i-1)
            if i < x:
                h.append(i+2)
            s = s[0:i] + 'BCA' + s[i+3:]
            index += 1
    h = list(set(h))

    return s, index, h

S = input()

li = []

for i in range(len(S) - 2):
    if S[i] == 'A':
        li.append(i)

ans = 0

while len(li):
    S, ans, li = serch(S, ans, li)

print(ans)
