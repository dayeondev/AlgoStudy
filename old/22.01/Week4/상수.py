nums = list(input())
n1 = []
n2 = []
change = False
for num in reversed(nums):
    if num == ' ':
        change = True
        continue
    if change:
        n2.append(num)
    else:
        n1.append(num)

A = int(''.join(n1)) 
B = int(''.join(n2))

if A > B:
    print(A)
else :
    print(B)