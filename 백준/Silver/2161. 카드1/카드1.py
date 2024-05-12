N = int(input())
li = [0] * N
ans = []
for i in range(1, N + 1):
    li[i - 1] = i

flag = 1
while len(li) > 0:
    if flag == 1:
        ans.append(li.pop(0))
        flag = 0
    else:
        li.append(li.pop(0))
        flag = 1
        
for i in ans:
    print(i, end=' ')