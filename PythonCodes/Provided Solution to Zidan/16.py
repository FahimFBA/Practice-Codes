# taking int as input from the user
value = int(input())
# define a flag variable
flag = False
# condition
if value > 1:
    # checking for factors
    for i in range(2, value):
        if (value % i) == 0:
            # if factor is found, set flag to True
            flag = True
            # break out of loop
            break
# check whether the flag is True or False
if flag:
    print(value, "is not a prime number")
else:
    print(value, "is a prime number")