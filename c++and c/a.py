p=0
r=0
t=0
while True:
    p=float(input("enter the principal amount"))
    if p<0:
        print("principal amount cannot be less than zero")
    else:
        break    
while True:
    r=float(input("enter the rate"))
    if r<0:
        print("rate cannot be less than zero")
    else:
        break    
while True:
    t=int(input("enter the time period"))
    if t<0:
        print("principal amount cannot be less than zero")
    else:
        break    
total_amount=p*pow(1+r/100,t)
print(f"money after {t} years at intrest rate of {r} is {total_amount:.2f}")    