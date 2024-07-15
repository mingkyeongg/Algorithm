import sys
input = sys.stdin.readline
print = sys.stdout.write

N = int(input())
card = list(map(int, input().split()))
M = int(input())
find = list(map(int, input().split()))

dict = {}
for i in card:
    if i not in dict:
        dict[i] = 1
    else:
        dict[i] += 1

for i in find:
	if i not in dict:
		print('0 ')
	else:
		print(str(dict[i]) + ' ')