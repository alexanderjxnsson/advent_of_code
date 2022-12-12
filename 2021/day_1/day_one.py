file = open("file.txt")
lines = file.readlines()
measureCounter = 0
arr = []
for line in lines:
    int(arr.append(line))
x = 1
for x in arr:
    if arr[x-1] < arr[x]:
        measureCounter += 1

print(measureCounter)

file.close()