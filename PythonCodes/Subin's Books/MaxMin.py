numbers = [1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20] # List

# Maximum
max = numbers[0] 
for i in numbers: # For loop iteration
    if i > max: 
        max = i
print("The maximum value is:" , max)

# Minimum
min = numbers[0]
for i in numbers: # For loop iteration
    if i < min:
        min = i
print("The minimum value is:" , min)