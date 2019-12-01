n = int(input())

x = n / 1.08

if x == x // 1:
    print(int(x))

else:
    if ((x // 1 + 1) * 1.08) // 1 == n:
        print(int(x // 1 + 1))
    else:
        print(":(")
