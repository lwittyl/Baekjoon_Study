import sys
input=sys.stdin.readline
from collections import deque
n=int(input())
queue = deque([])
for i in range(n):
    cmd=input().split()
    if cmd[0]=='1':
        queue.appendleft(cmd[1])
    elif cmd[0]=='2':
        queue.append(cmd[1])
    elif cmd[0]=='3':
        if queue:
            print(queue.popleft())
        else:
            print(-1)
    elif cmd[0]=='4':
        if queue:
            print(queue.pop())
        else:
            print(-1)
    elif cmd[0]=='5':
        print(len(queue))
    elif cmd[0]=='6':
        if queue:
            print(0)
        else:
            print(1)
    elif cmd[0]=='7':
        if queue:
            print(queue[0])
        else:
            print(-1)
    elif cmd[0]=='8':
        if queue:
            print(queue[len(queue)-1])
        else:
            print(-1)