import sys
input = sys.stdin.readline

T = int(input().rstrip())
for _ in range(T):
    recruit = []
    N = int(input().rstrip())
    for i in range(N):
        recruit.append(list(map(int, input().rstrip().split())))
    
    recruit.sort(key=lambda x: x[0])
    
    min_interview_score = float('inf')
    ans = 0
    
    for i in range(N):
        if recruit[i][1] < min_interview_score:
            min_interview_score = recruit[i][1]
            ans += 1
    
    print(ans)
