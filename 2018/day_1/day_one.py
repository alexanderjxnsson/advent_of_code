result = 0

file = open("/home/alexander/programmering/advent_of_code/2018/day_1/input.txt", "r")

for row in file:
    operator = row[0:1]
    if operator == '+':
        value = row.split('+')
        result += int(value[1])
    elif operator == '-':
        value = row.split('-')
        result -= int(value[1])

print("The result is: " + str(result))