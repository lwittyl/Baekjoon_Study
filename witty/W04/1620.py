import sys
input = sys.stdin.readline
n, m=map(int, input().split())
book={}
book2={}
answer={}
for i in range(1, n+1):
    quest=input().rstrip()
    book[i]=quest
    book2[quest]=i
for i in range(m):
    quest=input().rstrip()
    if quest in book2:
        answer[i]=book2[quest]
    else:
        answer[i]=book[int(quest)]
for value in answer.values():
    print(value)