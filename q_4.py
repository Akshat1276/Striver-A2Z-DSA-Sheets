n = int(input("ENTER THE NUMBER TO BE CONVERTED TO BINARY: "))
a = ""
if n>0:
    while n != 0:
        a = a+str(n%2)
        n = int(n/2)
else:
    print("ERROR. PLEASE ENTER POSITIVE VALUE")

print(a[::-1])
