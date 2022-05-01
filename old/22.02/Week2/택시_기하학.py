import math

in_n = int(input())
# in_n = 42

l1 = 2*(in_n**2)
l2 = round(math.pi * (in_n**2), 6)

print(f'{l2:6f}')
print(l1, '.000000', sep='')