import sys
input=sys.stdin.readline
money=[]
k=int(input())
for i in range(k):
    num=int(input())
    if num==0:
        money.pop()
    else:
        money.append(num)
print(sum(money))