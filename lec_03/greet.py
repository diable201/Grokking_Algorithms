def mood(name):
    print("How are you, %s?" % name)


def bye():
    print("See you soon!")


def greet(name):
    print("Hello, %s" % name)
    mood(name)
    print("It's time to say goodbye...")
    bye()


name = str(input())
greet(name)