x=int(input())
a=[]
b=input().split()
for i in range(0,x):
    a.append(int(b[i]))
c=[] 
for i in range(0,x):
    if (i==a[i]):
       c.append(a[i])
     
if not c:
    print ("-1")
else:
    c=sorted(c) 
print(*c)
