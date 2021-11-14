e = 0.0001 # точність
a = int(input())

if (a > 0) :
    x = 1
    y = 0
    while(abs(y - x) > e):
        y = x
        x = ( x + a / x) / 2
    print(format(x, ".4f"))
else : print("Number is negative or equal 0")
