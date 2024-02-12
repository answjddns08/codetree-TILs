a = int(input())

b = [0] * 10

for i in range(a):
    b[i] = int(input())
    if b[i] % 3 == 0 and b[i] % 2 != 0:
        print(b[i])