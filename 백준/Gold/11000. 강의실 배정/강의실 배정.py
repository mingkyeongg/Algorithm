import sys
import heapq

input = sys.stdin.readline

N = int(input())
time_table = []
for i in range(N):
	time_table.append(list(map(int, input().split())))

sorted_time_table = sorted(time_table, key= lambda x:(x[0], x[1]))

hq = []
heapq.heappush(hq, sorted_time_table[0][1])


for i in range(1, len(sorted_time_table)):
    if sorted_time_table[i][0] < hq[0]:
        heapq.heappush(hq, sorted_time_table[i][1])
    else:
        heapq.heappop(hq)
        heapq.heappush(hq, sorted_time_table[i][1])

print(len(hq))