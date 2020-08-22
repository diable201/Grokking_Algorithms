def binary_search(list, number):
	low = 0
	high = len(list) - 1

	while low <= high:
		mid = (low + high) // 2
		guess = list[mid]

		if guess == number:
			return mid
		elif guess > number:
			high = mid - 1
		else:
			low = mid + 1
	return None 

my_list = [1, 2, 3, 4, 5]

print(binary_search(my_list, 5))
