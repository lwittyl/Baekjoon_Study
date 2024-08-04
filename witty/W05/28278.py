import sys
input=sys.stdin.readline
stack=[]
end=0
n=int(input())
for i in range(n):
    cmd=input().split()
    if cmd[0]=='1':
        stack.append(cmd[1])
        end+=1
    elif cmd[0]=='2':
        if end>0:
            print(stack.pop())
            end-=1
        else:
            print(-1)
    elif cmd[0]=='3':
        print(end)
    elif cmd[0]=='4':
        if end==0:
            print(1)
        else:
            print(0)
    elif cmd[0]=='5':
        if end>0:
            print(stack[end-1])
        else:
            print(-1)