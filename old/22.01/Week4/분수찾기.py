input_x = int(input())
# input_x = 6

result = [0, 0]

def get_next_sequence(n, iteration):
    result = n + iteration
    return result

n = 0
prev_n = 0
iteration = 1
while True:
    if input_x <= n:
        # print(iteration - (input_x - prev_n), input_x - prev_n)
        result[0] = input_x - prev_n
        result[1] = iteration - (input_x - prev_n)
        if iteration % 2 == 0:
            result[0], result[1] = result[1], result[0]
        break
    prev_n = n
    n = get_next_sequence(n, iteration)


    iteration += 1

print(f'{result[0]}/{result[1]}')

