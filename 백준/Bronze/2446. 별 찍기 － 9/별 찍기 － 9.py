num = int(input())

for i in range(num - 1, -1, -1):
  space = ' ' * (num - i - 1)
  star = '*' * ( i * 2 + 1)
  print(space, end='')
  print(star)

for i in range(1, num):
  space = ' ' * (num - i - 1)
  star = '*' * ( i * 2 + 1)
  print(space, end='')
  print(star)
