# Asking for int value from the user
value = int(input())
# initial value of count is setting to 0
count = 0
# from 1 to value (initial value, ending value / till, increment value)
for i in range(7, value+1, 7):
    count = count + i
print(count)


