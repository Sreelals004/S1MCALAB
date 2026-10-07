def findgcd(a,b):
    while b:
        a,b=b,a%b
    return a
n1=int(input("enter the first number:"))
n2=int(input("enter the second number:"))
gcd=findgcd(n1,n2)
print(gcd)
