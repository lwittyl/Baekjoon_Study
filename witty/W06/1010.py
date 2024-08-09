import sys
import math
input=sys.stdin.readline
t=int(input())
for i in range(t):
    r,n=map(int,input().split())
    ans=math.factorial(n)/(math.factorial(n-r)*math.factorial(r))
    print(int(ans))

    