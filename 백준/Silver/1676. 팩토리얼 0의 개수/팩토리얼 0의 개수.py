N = int(input())
res = 1
for i in range(2, N + 1):
    res *= i
s = str(res)
leng = len(s)
res = 0
for i in range(leng - 1, 0, -1):
    if s[i] != '0':
        res = leng - i - 1
        break
print(res)
