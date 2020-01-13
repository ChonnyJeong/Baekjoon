
s = str(input())

stacka = []
stackb = []

s = list(s)
flaga = True
flagb = True


# () [] 연속으로 된 것 숫자 변환

for i in range(len(s)-1):
    if s[i] is '(' and s[i+1] is ')':
        stacka.append(i)
        i+=1
    elif s[i] is '[' and s[i+1] is ']':
        stackb.append(i)
        i+=1
stackalen = len(stacka)
stackblen = len(stackb)
for i in range(stackalen):
    indexa = stacka.pop()
    s[indexa] = 2
    s[indexa+1] = 0
for i in range(stackblen):
    indexb = stackb.pop()
    s[indexb] = 3
    s[indexb+1] =0
for i in range(stackalen+stackblen):
    s.remove(0)

while flaga is True or flagb is True:
#숫자 변환된것 연속되면 더하기
    flaga = True
    flagb = True
    for i in range(len(s) - 1):
        if type(s[i]) is int and type(s[i + 1]) is int:
            stacka.append(i)
            i+=1
    stackalen = len(stacka)
    if stackalen is 0 :
        flaga = False
    for i in range(stackalen):
        indexa = stacka.pop()
        s[indexa] = s[indexa] + s[indexa+1]
        s[indexa+1] = 0

    for i in range(stackalen):
        s.remove(0)


    for i in range(len(s)-2):
        if s[i] is '(' and type(s[i+1]) is int and s[i+2] is ')':
            stacka.append(i)
            i+=2
        elif s[i] is '[' and type(s[i+1]) is int and s[i+2] is ']':
            stackb.append(i)
            i+=2

    stackalen = len(stacka)
    stackblen = len(stackb)
    if stackalen is 0 and stackblen is 0  :
        flagb = False
    for i in range(stackalen):
        indexa = stacka.pop()
        s[indexa] = s[indexa+1]*2
        s[indexa+1] = 0
        s[indexa+2] = 0
    for i in range(stackblen):
        indexb = stackb.pop()
        s[indexb] = s[indexb + 1] * 3
        s[indexb + 1] = 0
        s[indexb + 2] = 0
    for i in range(stackalen+stackblen):
        s.remove(0)
        s.remove(0)

if len(s) > 1:
    print(0)
else:
    print(s[0])
