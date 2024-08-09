import sys
from collections import deque
input=sys.stdin.readline
n=int(input())
is_stack=list(map(int, input().split()))
questack_a=list(map(int, input().split()))
m=int(input())
questack_b=list(map(int, input().split()))
answer=deque([])
ans=[]
for i in range(n):
    if is_stack[i]==0:
        answer.append(questack_a[i])
for i in range(m):
    answer.appendleft(questack_b[i])
    ans.append(answer.pop())
print(*ans)