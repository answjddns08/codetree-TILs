a = int(input())

#홀수 또는 4의 배수인 수
#8로 나눈 값이 홀수
#7로 나눈 나머지가 4보다 같거나 큼

for i in range(1,a + 1):
    #print("i / 8은 " + str(i / 8))
    if int(i / 8) % 2 != 0 and i % 7 >= 4 and (i % 2 != 0 or i % 4 == 0):
        print(i,end=' ')