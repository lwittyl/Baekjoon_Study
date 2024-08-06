import sys
input=sys.stdin.readline
answer=[]
while True:
    stack=[]
    str=input().rstrip()
    if str=='.':
        break
    balanced=True
    for i in str:
        if i=='(' or i=='[':
            stack.append(i)
        elif i==')':
            if not stack or stack.pop()!='(':
                balanced=False
                break
        elif i==']':
            if not stack or stack.pop()!='[':
                balanced=False
                break
    if balanced and not stack:
        print("yes")
    else:
        print("no")