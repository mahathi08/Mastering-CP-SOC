n=int(input())
l=[]
for i in range(n):
    a,b = map(int,input().split())
    l.append([a,b])
x=sorted(l,key=lambda x:x[0])
t=0
reward=0
for i in range(n):
    t+=x[i][0]
    reward+=x[i][1]-t
print(reward)
    
 
 
