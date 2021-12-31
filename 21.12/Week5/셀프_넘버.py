def d_func(num, found_nums):
    
    if num < 10001:
        res_num = 0
        parts = list(str(num))
        parts = list(map(int, parts))

        res_num = num + sum(parts)
        found_nums.append(res_num)
        return d_func(res_num, found_nums)
    else:
        return found_nums

nums = range(10001)
found_nums = []

for i in range(1, 10001):
    found_nums.extend(d_func(i, []))

set_nums = set(found_nums)

for i in range(1, 10001):
    if i in set_nums:
        pass
    else:
        print(i)

