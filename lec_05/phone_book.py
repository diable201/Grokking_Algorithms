phone_book = {
    "Jenny": 876453,
    "Emergency": 911
}


def check_phone(name):
    if phone_book.get(name):
        print(phone_book.get(name))
    else:
        print("User not found")
        pass

check_phone("Alice")
check_phone("Jenny")
check_phone("Emergency")