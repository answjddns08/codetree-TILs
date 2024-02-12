pep = [0] * 100
pep[0] = 21
sum = 0
cnt = 0

while True:
    pep[cnt] = int(input())
    if (pep[cnt] >= 30 or pep[cnt] < 20):
        break
    sum += pep[cnt]
    cnt += 1

print('{0:0.2f}'.format(sum / cnt))