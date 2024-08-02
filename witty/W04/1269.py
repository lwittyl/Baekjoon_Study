import sys
input=sys.stdin.readline
n, m=map(int, input().split())
A=set(input().split())
B=set(input().split())
Adif=A-B
Bdif=B-A
print(len(Adif)+len(Bdif))
