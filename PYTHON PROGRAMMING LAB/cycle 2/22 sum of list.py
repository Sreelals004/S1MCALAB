num_list=[]
n=int(input("enter the number of values in list:"))
print("enter the element to the list:")
for i in range(n):
    val=int(input())
    num_list.append(val)
total=0
for item in num_list:
    total=total+item
print("the sum of all item in the list is:",total)