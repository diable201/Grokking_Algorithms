def recursive_count(list):
    if list == []:
        return 0
    else:
        return 1 + recursive_count(list[1:])


list = [1, 2, 4, 6, 7, 12, 125, 256]
print("Number of elements = %s" %recursive_count(list))