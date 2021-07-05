# Declaring List
mylist = []
# Taking int value from the user
TestCase = int(input())
# Initializing the value of count as 0
count = 0
# Initializing the value of increment as 0
increment = 0
# taking inputs till the TestCase
for i in range(TestCase):
    value = int(input())
    count += value
    increment += 1
    mylist.append(value)

# initial value of max is setting to 0
max = 0
for value in mylist:
    if value > max:
        max = value

print('Maximum', max)

# initial value of min is setting to 100000
min = 100000
for value in mylist:
    if value < min:
        min = value

print('Minimum', min)

Avg = count / increment
print("Average is", Avg)
