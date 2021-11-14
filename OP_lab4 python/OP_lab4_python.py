n = int(input())

if n >= 0:
    k = 1

    for i in range(1, n+1):
        k = k * (4 * i - 2) / (i + 1)
    print(k)
else:
    print("N is negetive.")
