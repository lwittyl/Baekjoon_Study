import sys
input=sys.stdin.readline
n,m=map(int, input().split())
cnt=0
answer=[]
notSeen={}
for i in range(n):
    notSeen[input().rstrip()]=i
for i in range(m):
    person=input().rstrip()
    if person in notSeen:
        cnt+=1
        answer.append(person)
print(cnt)
for i in sorted(answer):
    print(i)