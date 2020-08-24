voted = {}
def check_voter(name):
  if voted.get(name):
    print("Already voted!")
  else:
    voted[name] = True
    print("Let them vote!")

check_voter("Tom")
check_voter("Bob")
check_voter("Bob")
