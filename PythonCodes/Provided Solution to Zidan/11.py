# Taking int value from the user
value = int(input())
# Converting the int value into string
StringValue = str(value)
for i in reversed(StringValue):
    print(i+",", end =" ")
