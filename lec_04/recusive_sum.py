def recursive_sum(list):
    if list == []:
        return 0
    else:
        return list[0] + recursive_sum(list[1:])


list = [1, 2, 3, 4, 5]
print("Sum of array = %s" %recursive_sum(list))