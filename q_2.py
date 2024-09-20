import random

l1 = [random.randint(0,100) for _ in range(200)]
l2 = []

for j in range (10):
    count = ''
    for i in range(200):
        if l1[i] >= j*10 and l1[i] < 10+(j*10):
            count += '*'
    l2.append(count)

l3 = ["0-9", "10-19", "20-29", "30-39", "40-49", "50-59", "60-69", "70-79", "80-89", "90-99"]

for a in range(10):
    print(l3[a], ":", l2[a])
