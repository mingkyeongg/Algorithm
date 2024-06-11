N = int(input())

li = []
dic = {}

for i in range(N):
    s = input()
    li.append(s)

current_num = 9

def findWeight(li, dic):
    for i in range(len(li)):
        power = 1
        for c in li[i][::-1]:
            if c in dic:
                dic[c] += power
            else:
                dic[c] = power
            power *= 10
            
findWeight(li, dic)

sorted_weight = sorted(dic.items(), key= lambda item: item[1], reverse=True)
number = 9
res = 0

for char, weight in sorted_weight:
    res += weight * number
    number -= 1


print(res)