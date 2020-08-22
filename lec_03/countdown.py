def countdown(i):
    if i < 1:
        return 0
    else:
        print(i)
        countdown(i - 1)

number = int(input())
countdown(number)
    