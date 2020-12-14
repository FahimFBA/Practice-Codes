p=(4,5)
x,y=p
print(x)
print(y)


data = [ 'ACME' , 50 , 91.1, (2012, 12, 21)]
Name, Shares, Price , Date = data
print("Name:", Name)
print("Shares:", Shares)
print("Price:", Price)
print("Date:", Date)

Name, Shares, Price , (Year, Month, Day) = data
print("Year:", Year)
print("Month" , Month)
print("Day:", Day)

# If there is  a mismatch in the number of elements, you'll get an error.
