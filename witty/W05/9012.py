import sys
input=sys.stdin.readline
n=int(input())
for i in range(n):
    stack=[]
    a=input()
    for j in a:
        if j=='(':
            stack.append(j)
        elif j==')':
            if stack:
                stack.pop()
            else:
                print("NO")
                break
    else:
        if stack:
            print("NO")
        else:
            print("YES")