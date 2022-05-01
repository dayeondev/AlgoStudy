sentence = list(input())
count = 0
if sentence[0] == ' ':
    # sentence = sentence[1:]
    count += 1

if sentence[-1] == ' ':
    # sentence = sentence[:-1]
    count += 1

print(sentence.count(' ') + 1 - count)
