def main(strings, keyX, keyY):
    diff = strings.count(keyX)
    newStrings = strings.replace(keyX, keyY)
    print("Change count: " + str(diff))
    print(newStrings)

if __name__ == "__main__":
    strings, keyX, keyY = map(str, input("Enter args (strings keyX keyY) >> ").split())
    main(strings, keyX, keyY)

    """ 発展課題1 """
