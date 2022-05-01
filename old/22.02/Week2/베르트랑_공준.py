def eratosthenes(n, nums, max):
    if nums[n] == None:
        nums[n] = True
        tmp = n
        while True:
            tmp += n
            if tmp > max:
                break
            nums[tmp] = False

in_n = []

while True:
    tmp = int(input())
    if tmp == 0:
        break
    in_n.append(tmp)

nums = [False, False]
in_max = max(in_n)

for i in range(2, in_max*2 + 1):
    nums.append(None)

for i in range(0, in_max * 2 + 1):
    eratosthenes(i, nums, in_max*2)


for n in in_n:
    count = 0
    for i in range(n+1, n*2+1):
        if (i > n and i <= n*2) and nums[i]:
                count += 1
    print(count)

