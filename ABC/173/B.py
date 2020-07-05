dic = {"AC": 0, "WA": 0, "TLE": 0, "RE": 0}

n = int(input())

for i in range(n):
    s = input()
    dic[s] += 1

print("AC x {}".format(dic["AC"]))
print("WA x {}".format(dic["WA"]))
print("TLE x {}".format(dic["TLE"]))
print("RE x {}".format(dic["RE"]))
