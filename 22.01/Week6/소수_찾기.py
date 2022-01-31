import math

in_n = int(input())
nums = [int(num) for num in input().split(' ')]

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
for num in nums:
    if is_prime(num):
        count+= 1

print(count)