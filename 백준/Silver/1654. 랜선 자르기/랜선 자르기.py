N, K = map(int, input().split())
lan = [0] * K
for i in range(N):
    lan[i] = int(input())
ex = max(lan)
low = 1
high = ex
while low <= high:
	mid = (low + high) // 2
	temp = 0
	for i in lan:
		temp += (i // mid)
	if temp >= K:
		low = mid + 1
	else:
		high = mid - 1
print(high)

