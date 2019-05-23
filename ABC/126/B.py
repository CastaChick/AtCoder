S = input()
YY = int(S[:2])
MM = int(S[2:])

if 0 < YY < 13 and 0 < MM < 13:
    print("AMBIGUOUS")

elif 0 < YY < 13:
    print("MMYY")

elif 0 < MM < 13:
    print("YYMM")
    
else:
    print("NA")
