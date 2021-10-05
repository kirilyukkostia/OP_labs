M = float(input("Enter М: "))     #entering variable M
print ("M is equal to: " + str(M))

N = float(input("Enter N: "))     #entering variable N  
print ("N is equal to: " + str(M))

Div = M / N       #dividing M by N
print ("M/N is equal to: " + str(Div))

intDiv1 = int(Div)  #getting the integer of the division of M by N
junior = intDiv1 % 10   #getting the junior number of the integer part
print("The junior number is equal to: " + str(junior))

Div *= 10   #multiplying the division by 10
intDiv2 = int(Div)  #getting the integer of the multiplied division
senior = intDiv2 % 10   #getting the senior number of the integer part
print("The senior number is equal to: " + str(senior))

