# 1.1 unpacking 심화

s = "Hello"

a,b,c,d,e = s

print("initial word is %s." %s)
print("first element is %c," %a)
print("second element is %c" %b)
print("third element is %c" %c)
print("fourth element is %c" %d)
print("fifth element is %c" %e)

data = ['ACME', 50, 91.1, (2012, 12, 21)]
_, shares, price, _ = data

print("initial data is", data)
print("separated shares data is %s." %shares)
print("separated price data is %s." %price)
