s="Hello"
a,b,c,d,e=s
print(a)
print(b)
print(c)
print(d)
print(e)

# If I want to discard certain values while unpacking:

data = ['ACME' , 50, 91.1, (2012, 12, 21)]
_,shares,price,_=data
print(shares)
print(price)

# Although Python has no special syntax for this, I can often just pick a throwaway variable name for it like this.
# I have to ensure that the variable name I pick isn't being used for something else already.