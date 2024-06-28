T = int(input()) # 테스트 케이스

for case in range(T):
	n, degree = map(int, input().split()) # nxn 행렬, 각도
	rightup_leftdown = [] 
	leftup_rightdown = []
	left_right = []
	up_down = []
	direction = [[] for _ in range(4)]

	mid = n // 2

	degree = (degree + 360) % 360
	matrix = []

	for i in range(n):
		temp = list(map(int, input().split()))
		direction[1].append(temp[i])
		if i == mid:
			direction[0] = temp
		direction[2].append(temp[mid])
		direction[3].append(temp[n - i - 1])
		matrix.append(temp)

	for i in range(4):
		pos = (i + (degree // 45)) % 8
		if pos > 3:
			direction[i].reverse()
		pos %= 4
		if pos == 0:
			left_right = direction[i]
		elif pos == 1:
			rightup_leftdown = direction[i]
		elif pos == 2:
			up_down = direction[i]
		else:
			leftup_rightdown = direction[i]

	for i in range(n):
		j = 0
		if i == mid:
			for e in left_right:
				print(e, end=" ")
			print("")
			rightup_leftdown.pop(0)
			leftup_rightdown.pop(0)
			up_down.pop(0)
			continue
		while j < n:
			if i == j:
				print(rightup_leftdown[0], end=" ")
				rightup_leftdown.pop(0)
			elif n - i - 1 == j:
				print(leftup_rightdown[0], end=" ")
				leftup_rightdown.pop(0)
			elif j == mid:
				print(up_down[0], end=" ")
				up_down.pop(0)
			else:
				print(matrix[i][j], end=" ")
			j += 1
		print("")
