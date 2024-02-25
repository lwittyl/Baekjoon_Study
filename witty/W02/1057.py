import sys

cnt = 1
N, k, l = map(int, sys.stdin.readline().split())

while True:
    k = (k + 1) // 2
    l = (l + 1) // 2
    if k != l:
        cnt += 1
    else:
        break
print(cnt)