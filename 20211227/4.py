num=int(input())
r=[]
for i in range(num):
    array=input().split(' ')
    array=[int(m) for m in array if m !='']
    array.remove(array[0])
    js=[]
    os=[]
    for k in range(len(array)):
        if array[k]%2==0:
            os.append(array[k])
        else:
            js.append(array[k])
    js=sorted(js)
    os=sorted(os)
    
    r.append(js+os)
for s in r:
    print(' '.join([str(t)  for t in s   ]))
