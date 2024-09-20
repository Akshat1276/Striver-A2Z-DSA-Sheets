ch = "abcdef"
count = 0
for i in range(len(ch)):
    if ch[i].lower() in {'a', 'e', 'i', 'o', 'u'}:
        count += 1
    else:
        continue
print(count)
