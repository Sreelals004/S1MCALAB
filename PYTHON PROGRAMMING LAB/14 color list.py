clr1=set()
clr2=set()
n1=int(input("enter the number of color in list1:"))
print("enter the color to list 1:")
for i in range(n1):
    cl=input().lower()
    clr1.add(cl)
n2=int(input("enter the number of color in list2:"))
print("enter the colors to list 2:")
for i in range(n2):
    cl=input().lower()
    clr2.add(cl)
diff=clr1.difference(clr2)
print("Colors in List 1 Not in List 2:",diff)
