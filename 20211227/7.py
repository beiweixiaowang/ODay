a=int(input())
array=[]
for m in range(a):
    array.append([0]*a)
f=a-1
for i in range(a):
    array[i][f]=1
    for j in range(f+1,a):
        array[i][j]=2

    f-=1
cnt=0
for r in array:
    print(  ' '.join(  [str(l)  for l in r[:-1] ]    ),end=' ')
    cnt+=1
    if cnt==a:
        print(r[-1],end=' ')
    else:
        print(r[-1],end=' '+'\n')
