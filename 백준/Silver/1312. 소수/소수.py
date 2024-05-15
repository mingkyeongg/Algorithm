A, B, n = map(int, input().split())
temp = A // B
cnt = 0
while temp > 0:
    temp = temp // 10
    cnt += 1
for i in range(n + 1):
	mod = A % B
	div = A // B
	A = mod * 10
print(div)