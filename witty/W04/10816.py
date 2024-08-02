import sys
input=sys.stdin.readline
n=int(input())
card={}
answer=[]
number=list(input().split())
for i in range(n):
    if number[i] in card:
        card[number[i]]+=1
    else:
        card[number[i]]=1
m=int(input())
quest=list(input().split())
for i in range(m):
    if quest[i] in card:
        answer.append(card[quest[i]])
    else:
        answer.append(0)
print(*answer)