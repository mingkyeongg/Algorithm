com = [0] * 101
adjust = []
ret = 0

def find_set(x):
    if x != com[x]:
        com[x] = find_set(com[x])
    return com[x]

def union(u, v):
    x = find_set(u)
    y = find_set(v)
    if x != y:
        com[x] = y
        

num = int(input())
m = int(input())
for i in range(m):
	a, b = map(int, input().split())
	adjust.append((a, b))

adjust.sort(key=lambda x: x[0])

for i in range(1, num + 1):
	com[i] = i
for i in range(m):
	union(adjust[i][0], adjust[i][1])

vi = find_set(1)

for i in range(1, num + 1):
    if vi == find_set(com[i]):
        ret += 1

print(ret - 1)