file = open("file.txt",'r')
numberOfLines = list(file.readlines())
bestElf = 0
prevElf = 0
x = 0
for x in file:
    if file.readline != '\n':
        kcal = file.readline()
        kcal += kcal
        prevElf = kcal
    elif file.readline == '\n':
        kcal = 0
    if prevElf > bestElf:
        bestElf = prevElf
print("The best elf carries: ")
print(bestElf)
file.close()