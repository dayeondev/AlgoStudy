t = input()
for i in range(int(t)):
    tmp = input()
    s, r = tmp.split(' ')[0], tmp.split(' ')[1]
    for char in list(r):
        for j in range(int(s)):
            print(char, sep='', end='')
    print()