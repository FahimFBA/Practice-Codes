# initial value of count and increment are setting to 0
count = 0
increment = 0
# Taking 10 int values from the user
for i in range(10):
    value = int(input())
# Condition of Odd numbers
    if value % 2 != 0:
        increment += 1
        count = count + value
print('Total is' , count, 'and Average is' , (count/increment))

