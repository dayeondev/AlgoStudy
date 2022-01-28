in_t = int(input())
# in_t = 1

# 4  1 (0)    6 (1)  21 (6)  56(21)
# 3  1 (0)    5 (1)  15 (5)  35(15)   69
# 2  1 (0)    4 (1)  10 (4)  20(10)   34
# 1  1 (0)    3 (1)   6 (3)  10 (6)   14 
# 0  1        2       3       4        5 
# 2, 3 => 10
def get_size(k, n):
    apt = []
    apt.append([num for num in range(1, n + 1)])
    for i in range(0, k):
        floor = []
        for j in range(0, n):
            num = sum(apt[i][:j + 1])
            floor.append(num)
        apt.append(floor)
    # print(apt)
    # print(n)
    return apt[k][n-1]

for i in range(in_t):
    in_k = int(input())
    in_n = int(input())
    # in_k, in_n = 2, 3
    # print(in_k, in_n)
    print(get_size(in_k, in_n))