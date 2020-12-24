# Write a python program that removes any repeated items from a
# list so that each item appears at most once.For instance, the
# list[1, 1, 2, 3, 4, 3, 0, 0]   would   become[1, 2, 3, 4, 0].


arr = [1, 1, 2, 3, 4, 3, 0, 0]

for i in arr:
    
    cout=0
    cout=arr.count(i)
    if cout > 1:
        arr.remove(i)
    
print(arr)
