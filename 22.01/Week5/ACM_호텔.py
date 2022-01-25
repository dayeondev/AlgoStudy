in_t = int(input())


for i in range(in_t):
# for i in range(1):
    in_h, in_w, in_n = [int(num) for num in input().split(' ')]
    # in_h, in_w, in_n = 10, 1, 10

    distance = (in_n-1) // in_h
    floor = (in_n-1) % in_h

    print(f'{floor + 1}{(distance+1):02d}')