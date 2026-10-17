result=[]

start=int(input("enter the starting range(four-digit number):"))
end=int(input("enter the ending range(four-digit number):"))
if start<1000 or end>9999 or start>end:
    print("invalid range.please enter a valid four-digit range.")
else:
    for num in range(start,end+1):
      d=str(num)
      j=0
      for i in d:
        d1=int(i)
        if d1%2==0 :
          j=j+1
          if j==4:
            root=int(num**0.5)
            if root*root==num:
              result.append(num)
print("four-digit even perfect square number in the given range:")
print(result) 
