cache = {}
def getPage(url):
    if cache.get(url):
        print("data is cached")
    else:
        cache[url] = True
        print("data is not cached")

getPage("Facebook")
getPage("Google")
getPage("Facebook")