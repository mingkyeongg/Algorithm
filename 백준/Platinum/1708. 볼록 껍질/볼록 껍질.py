import math

n = int(input())
point = []
for i in range(n):
    point.append(list(map(int, input().split())))

point.sort(key=lambda x: (x[1], x[0]))
base_x = point[0][0]
base_y = point[0][1]
point.pop(0)

def polar_angle(point):
	return math.atan2(point[1] - base_y, point[0] - base_x)
point.sort(key=polar_angle)

stack = []
stack.append([base_x, base_y])
stack.append(point[0])

def ccw(a, b, c):
    return (b[0] - a[0]) * (c[1] - b[1]) - (b[1] - a[1]) * (c[0] - b[0])

for i in range(1, len(point)):
    while len(stack) >= 2:
        b = stack[len(stack) - 1]
        stack.pop(len(stack) - 1)
        a = stack[len(stack) - 1]
        
        if ccw(point[i], a, b) > 0:
            stack.append(b)
            break
    stack.append(point[i])

print(len(stack))