input_t = int(input())
# input_t = 1

def get_max_sum(num):

    index = 0

    i = 0
    next_sum = 0
    max_sum = 0
    

    while True:
        i += 1
        next_sum += i
        # print(next_sum)
        if next_sum > num:
            break
        index = i
        max_sum = next_sum

    return index, max_sum

def fine_adjustment(distance, max_index):

    count = 0
    n = max_index
    # print(f'distance: {distance}')
    while True:
        if distance == 0:
            break
        # print(distance, n)
        # print(distance - n)
        # break
        if distance - n >= 0:
            # print(distance)
            distance -= n
            count += 1
        else:
            n -= 1


        pass
    return count


for _ in range(input_t):
    input_x, input_y = [int(num) for num in input().split(' ')]
    # input_x, input_y = 1, 5
    result = 0
    
    distance = input_y - input_x

    half = distance // 2

    max_index, max_sum = get_max_sum(half)
    # print(f'dist: {distance}')
    # print(f'max_index: {max_index}')
    # print(f'max_sum: {max_sum}')

    result += max_index * 2
    distance -= max_sum * 2

    result += fine_adjustment(distance, max_index + 1)

    print(result)