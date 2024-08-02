import sys
input=sys.stdin.readline
S=input().rstrip()
total=set()
for i in range(len(S)):
    for j in range(1, len(S)+1):
        total.add(S[i:i+j])
print(len(total))