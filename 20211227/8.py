
a=int(input())
array=[]
for m in range(a):
    array.append([-1]*a)
fi=1
for r in range(a):
    t=array[r][:fi]
    array[r]=t
    fi+=1

f=a-1
num=0
fi=-1
for j in range(a):
    for i in range(a-1,fi,-1):
        array[i][j]=list(str(num))[-1]
        num+=1
    fi+=1

cnt=0
for r in array:
    cnt+=1
    if cnt==a:
        print(  ' '.join(  [l for l in r ]    ),end=' ')
    else:
     
        print(  ' '.join(  [l for l in r ]    ),end=' '+'\n')





