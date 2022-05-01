vocab = list(input())
# vocab = list('baekjoon')
len_abc = ord('z') - ord('a') + 1
list_abc = []

for i in range(len_abc):
    list_abc.append(0)
max = 0
max_index = -1
for char in vocab:
    if ord(char) >= 65 and ord(char) < 91:
        char = chr(ord(char) + 32)
    list_abc[len_abc - (ord('z') - ord(char) + 1)] += 1
    if list_abc[len_abc - (ord('z') - ord(char) + 1)] > max:
        max = list_abc[len_abc - (ord('z') - ord(char) + 1)]
        max_index = len_abc - (ord('z') - ord(char) + 1)

if list_abc.count(max) == 1:
    print(chr(max_index + ord('A')))
else:
    print('?')