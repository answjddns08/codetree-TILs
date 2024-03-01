a = int(input())

for i in range(a):
    print("  " * i + "* " * (1 + 2 * (a - 1 - i)))

for i in range(a - 2,-1,-1):
    print("  " * i + "* " * (1 + 2 * (a - 1 - i)))