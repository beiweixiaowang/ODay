s=input()
num=input().split(' ')
num=[int(r) for r in num if r!='']
num=list(set(num))
num=sorted(num)
print(num[-2])
