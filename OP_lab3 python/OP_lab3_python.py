p = 4 # точність
n = 2 # степінь
a = int(input())

if (a > 0) :
    x = 1
    for i in range(0, p):
        x = ( ((n - 1) * x) + a / pow(x, n - 1)) / n
    print(format(x, "." + str(p) + "f"))
else : print("Number is negative or equal 0")
