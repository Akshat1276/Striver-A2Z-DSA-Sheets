#swapping method
#bubble method

import random
l1 = []

for a in range(25):
    l1.append(random.randint(1, 100))

for i in range(len(l1)):
    for j in range(i+1, len(l1)):
        if l1[i] > l1[j]:
            l1[i], l1[j] = l1[j], l1[i]
        else:
            continue
print(l1)

# selection method

l2 = l1.copy()

for i in range(len(l2)):
    min_idx = i
    for j in range(i+1, len(l2)):
        if l2[j] < l2[min_idx]:
            min_idx = j
    if min_idx != i:
        l2[i], l2[min_idx] = l2[min_idx], l2[i]
print(l2)
