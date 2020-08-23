def recursive_max(list):
    if len(list) == 0:
        return None
    elif len(list) == 1:
        return list[0]
    else:
        max_element = recursive_max(list[1:])
        if list[0] > max_element:
            return list[0]
        else:
            return max_element


list = [0, 4, 1023, 511, -11, 9]
print("Maximum element is: %s" %recursive_max(list))