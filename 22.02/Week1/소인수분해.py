import math

in_n = int(input())
# in_n = 72

if in_n == 1:
    exit()

i = 2
while in_n != 1:
    if in_n % i == 0:
        in_n /= i
        print(i)
    else:
        i += 1


# def is_prime(num):
#     result = True
    
#     if num <= 1:
#         return False
#     elif num == 2:
#         return True
#     else:
#         for i in range(2, int(math.sqrt(num) +1)):
#             if num % i == 0:
#                 result = False
#                 break

#     # print(result)

#     return result
# nums = [0]
# i = 0
# while True:
#     i += 1
#     nums.append(0)
#     if not is_prime(i):
#         pass
#     else:
#         while in_n % i == 0:
#             print(i)
#             in_n /= i
#             nums[i] += 1
        
#     if in_n == 1:
#         break
        
    
# # for i, num in enumerate(nums):
# #     for j in range(0, num):
# #         print(i)