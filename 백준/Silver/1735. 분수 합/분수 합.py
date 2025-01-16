from math import gcd

n = list(map(int, input().split()))
m = list(map(int, input().split()))

num = [n[0] * m[1] + n[1] * m[0], n[1] * m[1]] 
ans1 = num[0]
ans2 = num[1]
ans1 //= gcd(num[0], num[1])
ans2 //= gcd(num[0], num[1])
print(ans1, ans2)