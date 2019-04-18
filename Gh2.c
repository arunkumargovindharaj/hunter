x=int(input())
a=[]
b=[int(b)for b in input().split()]
for i in range(0,x):
    a.append(b[i])
    a.sort()
    a.reverse()
print(*a,sep=' ')
