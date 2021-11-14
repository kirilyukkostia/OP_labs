def isNumberPerfct(num : int) -> bool:
    sum = 0
    for i in range(1, num):
        if num % i == 0:
            sum += i

    return sum == num


n = int(input())

for i in range(1, n+1):
    if isNumberPerfct(i):
        print(i)
