import sys
input=sys.stdin.readline
from collections import deque
n=int(input())
queue = deque([])
for i in range(n):
    cmd=input().split()
    if cmd[0]=='push':
        queue.append(cmd[1])
    elif cmd[0]=='pop':
        if queue:
            print(queue.popleft())
        else:
            print(-1)
    elif cmd[0]=='size':
        print(len(queue))
    elif cmd[0]=='empty':
        if queue:
            print(0)
        else:
            print(1)
    elif cmd[0]=='front':
        if queue:
            print(queue[0])
        else:
            print(-1)
    elif cmd[0]=='back':
        if queue:
            print(queue[len(queue)-1])
        else:
            print(-1)