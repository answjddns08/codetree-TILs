a = int(input())
temp = a
cnt = 0

for i in range(1,a + 1):
    cnt += 1
    temp /= i
    if (temp <= 1):
        break

print(cnt)