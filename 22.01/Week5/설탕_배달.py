input_n = int(input())
# input_n = 6

n = input_n
n1 = 0
bag = [0, 0] # 3KG, 5KG

weight = None

if n == 3:
    print(1)
    exit()

if n < 5 or n == 7:
    print(-1)
    exit()

if n % 5 == 0:
    bag[1] = n // 5
else:
    bag[1] = n // 5 + 1

while True:
    weight = bag[0] * 3 + bag[1] * 5

    if weight == n:
        print(bag[0] + bag[1])
        # print(bag)
        exit()

    if weight + 3 > n:
        # print(True,bag)
        bag[1] -= 1
    else:
        # print(False,bag)
        bag[0] += 1
    
    