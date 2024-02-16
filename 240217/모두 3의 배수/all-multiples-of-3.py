is3 = True

for i in range(5):
    a = int(input())

    if a % 3 != 0:
        is3 = False
        break

print(int(is3))