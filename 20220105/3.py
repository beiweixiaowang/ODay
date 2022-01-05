def fibonacci(num):
    fibs = [0,1]
    for i in range(num-2):
      fibs.append(fibs[-2]+fibs[-1])
    print(fibs[num-1])
    
n = int(input())
for i in range(n):
    m = int(input())
    fibonacci(m+1)