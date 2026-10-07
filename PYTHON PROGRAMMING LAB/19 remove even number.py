c=int(input("ENTER HOW MANY ELEMENTS:"))
list1=[]
for i in range(c):
    list1.append(int(input("Enter Number:")))
for i in list1:
    if(i%2==0):
        list1.remove(i)
print(list1)
