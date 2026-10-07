dict1={}
dict2={}
print("Enter element of first dic")
while True:
    key=input("enter a key(or 'q' to quit)")
    if key=='q':
        break
    value=int(input("enter a value:"))
    dict1[key]=value
print("Enter element of second dic")
while True:
    key=input("enter a key(or 'q' to quit)")
    if key=='q':
        break
    value=int(input("enter a value:"))
    dict2[key]=value
mg=dict1|dict2
print(mg)
