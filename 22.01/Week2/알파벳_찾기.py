vocab = list(input())
# vocab = list('baekjoon')
len_abc = ord('z') - ord('a') + 1
list_abc = []

for i in range(len_abc):
    list_abc.append(-1)

for i, char in enumerate(vocab):
    if list_abc[len_abc - (ord('z') - ord(char) + 1)] == -1:
        list_abc[len_abc - (ord('z') - ord(char) + 1)] = i
[print(char, end=' ') for char in list_abc]