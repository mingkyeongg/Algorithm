cnt = 0
N, S = map(int, input().split())
li = list(map(int, input().split()))


def backtracking(idx, sum):
    global cnt
    if idx != 0 and sum == S:
        cnt += 1
    if idx >= N:
        return
    for i in range(idx, N):
        backtracking(i + 1, sum + li[i])

backtracking(0, 0)
print(cnt)