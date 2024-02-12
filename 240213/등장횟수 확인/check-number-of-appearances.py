b = [0] * 5
a = 0

for i in range(5):
    b[i] = int(input())
    if b[i] % 2 == 0:
        a += 1

print(a)