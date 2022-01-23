import math
in_str = input()
# in_str = '100 99 100000000'
a, b, v = [int(num) for num in in_str.split(' ')]

result = (v - b) / (a - b)
result = int(math.ceil(result))
print(result)

# floor = 0
# days = 0

# while True:
#     floor += a
#     if floor >= v:
#         print(days + 1)
#         break
#     floor -= b
#     days += 1
#     # print(days)