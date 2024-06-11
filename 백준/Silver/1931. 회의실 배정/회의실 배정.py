N = int(input())
time_table = []
for i in range(N):
	time_table.append(list(map(int, input().split())))

sorted_time_table = sorted(time_table, key= lambda x:(x[1], x[0]))

start_time = -1
res = 0

for start, end in sorted_time_table:
    if start < start_time:
        continue
    res += 1
    start_time = end
    
print(res)