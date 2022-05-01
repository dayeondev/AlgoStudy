import math
in_m = int(input())
in_n = int(input())

# in_m = 60
# in_n = 100

def is_prime(num):
    result = True
    
    if num <= 1:
        return False
    elif num == 2:
        return True
    else:
        for i in range(2, int(math.sqrt(num) +1)):
            if num % i == 0:
                result = False
                break

    # print(result)

    return result

count = 0
n_sum = 0
n_max = 0

for i in range(in_m, in_n + 1):
    # print(is_prime(i))
    if is_prime(i):
        count += 1
        n_sum += i
        if n_max == 0:
            n_max = i


if count == 0:
    print(-1)
else:
    # print(count)
    print(n_sum)
    print(n_max)