p = int(input("Enter p: "))
q = int(input("Enter q: "))
#n = int(input("Enter n: "))

arr = list(map(int, input("Enter arrray: \n").split()))

max_num = max(arr)

for i in range(len(arr)):
    if arr[i] % p == q:
       arr[i] = max_num ** 2
    
print(f"Array: \n{arr}")