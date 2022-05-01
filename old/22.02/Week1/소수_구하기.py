in_m, in_n = [int(num) for num in input().split(' ')]

# in_m, in_n = 3, 16

nums = [False, False]
for i in range(2, in_n + 1):
    nums.append(None)


def eratosthenes(n, nums, max):
#     if n==4:
#         print(n)
    if nums[n] == None:
        nums[n] = True
        tmp = n
        while True:
            tmp += n
            if tmp > max:
                break
            nums[tmp] = False

    

for i in range(0, in_n + 1):
    eratosthenes(i, nums, in_n)
    if i >= in_m and i <= in_n:
        if nums[i]:
            print(i)
            pass