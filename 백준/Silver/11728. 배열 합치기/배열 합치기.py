import sys
from collections import deque

size = list(map(int, sys.stdin.readline().split()))
a = deque(map(int, sys.stdin.readline().split()))
b = deque(map(int, sys.stdin.readline().split()))

while a or b:
    if not a:
        print(b.popleft(), end=' ')
    elif not b:
        print(a.popleft(), end=' ')
    elif a[0] < b[0]:
        print(a.popleft(), end=' ')
    else:
        print(b.popleft(), end=' ')
