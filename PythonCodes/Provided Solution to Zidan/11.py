value = int(input())
temp = value
sum = 0
count = 0
while(temp > 0):
    rem = temp % 10
    temp = temp // 10
    sum = sum + rem
    print(rem,",", end='')