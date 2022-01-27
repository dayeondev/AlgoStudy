in_str = input()
# in_str = 'UNUCIC'

def alphabet2num(char):
    result = None
    chr2ord = ord(char)
    if chr2ord < ord('D'):
        result = 2
    elif chr2ord < ord('G'):
        result = 3
    elif chr2ord < ord('J'):
        result = 4
    elif chr2ord < ord('M'):
        result = 5
    elif chr2ord < ord('P'):
        result = 6
    elif chr2ord < ord('T'):
        result = 7
    elif chr2ord < ord('W'):
        result = 8
    elif chr2ord <= ord('Z'):
        result = 9
    else:
        return result
    return result

result = 0

for char in list(in_str):
    result += alphabet2num(char) + 1

print(result)