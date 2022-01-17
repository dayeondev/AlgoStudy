# word = list('ljes=njak')
word = list(input())
# print(word)

# ['c=', 'c-', 'dz=', 'd-', 'lj', 'nj', 's=', 'z=']

def croatia_nfa(chrs):
    count = 0
    s1 = ['s', 'z', 'c', 'd', 'l', 'n']
    s2 = ['=', '-', 'z', 'j']
    s3 = ['=']


    def stage1(chrs, count):
        if len(chrs) <= 1:
            count += len(chrs)
            return count
        else:
            if chrs[0] in s1:
                return stage2(chrs, count)
            else:
                # print(f'stage1-a, {chrs}')
                count += 1
                return stage1(chrs[1:], count)
               
    
    def stage2(chrs, count):
        if chrs[1] in s2:
            if ((chrs[0] in ['s', 'z', 'c']) and (chrs[1] == '=')) or\
                ((chrs[0] in ['c', 'd']) and (chrs[1] == '-')) or\
                ((chrs[0] in ['l', 'n']) and (chrs[1] == 'j')):
                # print(f'stage2-a, {chrs}')
                count += 1
                return stage1(chrs[2:], count)

            elif (chrs[0] in ['d']) and (chrs[1] == 'z'):
                return stage3(chrs, count)

            else:
                count += 1
                return stage1(chrs[1:], count)
        
        else:
            # print(f'stage2-b, {chrs}')
            count += 1
            return stage1(chrs[1:], count)
            
            

    def stage3(chrs, count):
        if len(chrs) == 2:
            count += 2
            return count
        elif chrs[2] in s3:
            # print(f'stage3-a, {chrs}')
            count += 1
            return stage1(chrs[3:], count)
        else:
            count += 1
            return stage1(chrs[1:], count)
    count = stage1(chrs, count)
    return count

print(croatia_nfa(word))