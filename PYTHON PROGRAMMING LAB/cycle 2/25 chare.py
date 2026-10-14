input_str=input("Enter a string:")
char_fre={}
for i in input_str:
    char_fre[i]=char_fre.get(i,0)+1
print(f"'character frequencies in '{input_str}':")
for i,count in char_fre.items():
    print(f"{i} occurs {count}times.")