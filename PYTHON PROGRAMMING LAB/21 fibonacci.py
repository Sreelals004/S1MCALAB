n=int(input("Enter Number of N terms:"))
if n<=0:
    print("Fibonacci series up to",n,"is not defined.")
else:
    fst=0
    snd=1
    print("The first",n,"number in the Fibonacci series=")
    print(fst,",",snd,end=",")
    for i in range(2,n):
        fib=fst+snd
        fst=snd
        snd=fib
        if i==n-1:
            print(fib,end=" ")
        else:
            print(fib,end=",")
