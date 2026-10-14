str=input("enter a string:")
if str.endswith('ing'):
    mod_str=str+'ly'
else:
    mod_str=str+'ing'
print("modified string:",mod_str)