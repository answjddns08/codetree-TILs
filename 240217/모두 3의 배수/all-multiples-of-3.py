a = list(map(int,input().split('\n')))

is3 = True

for i in a:
    if i % 3 != 0:
        is3 = False
        break

print(int(is3))