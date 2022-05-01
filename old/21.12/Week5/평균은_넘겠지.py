c = int(input())

for i in range(c):
    arr = input().split()
    n = arr[0]
    scores = list(map(int, arr[1:]))
    avg = sum(scores, 0) / len(scores)

    collect = 0
    for score in scores:
        if score > avg:
            collect += 1
        
    result = round(collect / len(scores) * 100, 3)
    print(f'{result:.3f}%')