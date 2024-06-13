import sys
input = sys.stdin.readline

N, M = map(int, input().split())

dic = {} # 자주 나오는 순, 단어의 길이, 알파벳 사전순

for i in range(N):
    word = input()
    if len(word) < M + 1:
        continue
    if word in dic:
        dic[word][0] += 1
    else:
        dic[word] = [0, len(word), word]


arr = dic.values()
values = [*arr]
values.sort(key = lambda x: (-x[0], -x[1], x[2]))

for freq, len, word in values:
    print(word[:-1])