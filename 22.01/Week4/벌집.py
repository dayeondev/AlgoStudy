N = int(input())

def H(n):
    result = 0.0
    _n = 0.0
    _n += n
    result = 1.0 + (6.0 * ((_n*(_n-1))/2.0))
    # print(result)
    return result

# print(H(1))
result = 0
max = -1
# print(max)
while True:
    
    if N <= max:
        print(result)
        exit()
    result += 1
    max = H(result)
    