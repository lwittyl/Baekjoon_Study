import sys
input=sys.stdin.readline
n, k=map(int, input().split())
from collections import deque

dq = deque(range(1, n + 1))
answer = []

while dq:
    dq.rotate(-k)
    answer.append(dq.pop())

print('<' + ', '.join(map(str, answer)) + '>')
