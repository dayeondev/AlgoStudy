x = []
y = []
for i in range(0, 3):
    _x, _y = [int(num) for num in input().split(' ')]
    x.append(_x)
    y.append(_y)


if x[0] == x[1]:
    print(x[2], ' ', end='', sep='')
elif x[0] == x[2]:
    print(x[1], ' ', end='', sep='')
else:
    print(x[0], ' ', end='', sep='')

if y[0] == y[1]:
    print(y[2], ' ', end='', sep='')
elif y[0] == y[2]:
    print(y[1], ' ', end='', sep='')
else:
    print(y[0], ' ', end='', sep='')

