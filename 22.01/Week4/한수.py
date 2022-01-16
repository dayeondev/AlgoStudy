N = int(input())

def is_han(nums):
    if len(nums) > 2:
        if nums[0] - nums[1] == nums[1] - nums[2]:
            return is_han(nums[1:])
        else:
            return False
    else:
        return True

if N < 100:
    print(N)
    exit()
else:
    count = 0
    for num in range(100, N + 1):
        if is_han(list(map(int, str(num)))):
            count += 1
    print(99 + count)