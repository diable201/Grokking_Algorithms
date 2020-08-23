def loop_sum(array):
    sum = 0
    for i in array:
        sum += i
    return sum


list = []
print('The number of elements in list:')
i = int(input())
print('Append data in list of:')
for i in range(i):
    data = int(input())
    list.append(data)
print("Sum of array = %s" %loop_sum(list))