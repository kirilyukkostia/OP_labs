x = float(input("Enter x: "))
print("x is equal to: " + str(x))

y = float(input("Enter y: "))
print("y is equal to: " + str(y))

R = bool
if ((y > x / 2) & (pow(x - 2, 2) + pow(y, 2) <= 4)): 
    R = True
else: R = False

#if ((y > x / 2) && (pow(x - 2, 2) + pow(y, 2) <= 4))
#	//	r = true;
#	//else r = false;

print("yes, it belongs" if R else "no, it doesn't belong")
