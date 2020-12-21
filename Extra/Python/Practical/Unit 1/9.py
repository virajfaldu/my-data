
# Write a menu driven python program which perform the
# following:
# Find area of circle
# Find area of triangle
# Find area of square and rectangle
# Find Simple Interest
# Exit.(Hint: Use infinite while loop for Menu)

while True:
    print("\n|----------------------------------------|")
    print(" 1. Find area of circle")
    print(" 2. Find area of triangle")
    print(" 3. Find area of square")
    print(" 4. Find area of rectangle")
    print(" 5. Find Simple Interest")
    print(" 6. Exit")
    print("|----------------------------------------|")

    ch = int(input("\n Which operation whould you like to choose : "))

    if ch == 1:
        r = float(input("\n Insert radious of circle : "))
        ans = 3.14 * r * r
        print("\n Area = ", ans)
    elif ch == 2:
        b = int(input("\n Insert base of triangle   : "))
        h = int(input("\n Insert height of triangle : "))
        ans = .5 * b * h
        print("\n Area = ", ans)
    elif ch == 3:
        l = int(input("\n Insert length of square : "))
        ans = l * l
        print("\n Area = ", ans)
    elif ch == 4:
        l = int(input("\n Insert length of recangle : "))
        b = int(input("\n Insert breadth of recangle : "))
        ans = l * b
        print("\n Area = ", ans)
    elif ch == 5:
        p = int(input("\n Insert price : "))
        r = int(input("\n Insert rate  : "))
        n = int(input("\n Insert year  : "))
        ans = (p * r * n) / 100
        print("\n Area = ",ans)
    elif ch == 6:
        break
    else:
        print("\n Invalid answer......Try again..........")
