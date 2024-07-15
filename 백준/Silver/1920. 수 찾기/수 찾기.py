import sys
input = sys.stdin.readline
print = sys.stdout.write

N = int(input())
arr = list(map(int, input().rstrip().split()))
M = int(input())
find = list(map(int, input().rstrip().split()))

arr.sort()

def binary_search(arr, target):
    left = 0
    right = len(arr) - 1
    while left <= right:
        mid = (left + right) // 2
        if arr[mid] == target:
            return 1
        elif arr[mid] < target:
            left = mid + 1
        else:
            right = mid - 1
    return 0

for i in find:
	print(str(binary_search(arr, i)) + '\n')