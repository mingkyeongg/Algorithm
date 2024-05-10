N = int(input())
li = [] * N
for i in range(N):
    li.append(list(map(int, input().split())))

sum_list = [[] for _ in range(N)]
winner = 0
max_result = -1

for i in range(3):
    for j in range(i + 1, 4):
        for k in range(j + 1, 5):
            for l in range(N):
                sum_list[l].append((li[l][i] + li[l][j] + li[l][k]) % 10)

for i in range(N):
    max_sum = max(sum_list[i])
    if max_result < max_sum or (max_result == max_sum and winner < i + 1):
        max_result = max_sum
        winner = i + 1

print(winner)
