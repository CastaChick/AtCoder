s = input()
q = int(input())
head = []
tail = []
state = 1

for i in range(q):
    query = input().split()
    if len(query) == 1:
        state *= -1

    elif state == 1:
        if query[1] == "1":
            head.append(query[2])
        else:
            tail.append(query[2])
    else:
        if query[1] == "1":
            tail.append(query[2])
        else:
            head.append(query[2])

if state == 1:
    print("".join(head[::-1])+s+"".join(tail))
else:
    print("".join(tail[::-1])+s[::-1]+"".join(head))
