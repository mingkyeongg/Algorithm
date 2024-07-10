problem_cnt, student = map(int, input().split())

points = list(map(int, input().split()))
scores = []
max_student = -1
max_score = -1

for i in range(student):
    score = list(input().split())
    sum = 0
    for j in range(1, len(score)):
        if score[j] == 'O':
            sum += points[j - 1]
    if max_score < sum:
        max_student = int(score[0])
        max_score = sum
    if max_score == sum:
        if int(score[0]) < max_student:
            max_student = int(score[0])
            max_score = sum
        
print(max_student, max_score, end=" ")