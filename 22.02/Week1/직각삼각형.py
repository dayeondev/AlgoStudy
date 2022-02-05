side = [None, None, None]


while True:
    side = [int(num) for num in input().split(' ')]
    side.sort()
    if sum(side) == 0:
        break

    if side[0]**2 + side[1]**2 == side[2]**2:
        print('right')
    else:
        print('wrong')