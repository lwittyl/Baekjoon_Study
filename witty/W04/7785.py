import sys
input = sys.stdin.readline

dict={}
for i in range(n):
    man, state=input().split()
    if state=='enter':
        dict[man]=True
    else:
        del dict[man]
print("\n".join(sorted(dict.keys(), reverse=True)))
