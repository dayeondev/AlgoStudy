# in_t = int(input())
in_t = 1

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

nums = []

for i in range(0, in_t):
    # in_n = int(input())
    in_n = 8
    nums.append(in_n)

num_max = max(nums)

nums = [False, False]
for i in range(2, num_max + 1):
    nums.append(None)

for i in range(0, num_max + 1):
    eratosthenes(i, nums, num_max)


for num in nums:
    result = []
    for i in reversed(range(0, num_max+1)):
        if 
        # while True:
        #     if num - i == 
        print(i)
    print(num)