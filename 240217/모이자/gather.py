a = int(input())

pep = list(map(int,input().split()))

min = 2147483647

for i in range(a):
    sum = 0
    
    for j in range(a):
        sum += pep[j] * (i - j if i - j > 0 else -(i - j))
    
    if (min > sum):
        min = sum

print(min)