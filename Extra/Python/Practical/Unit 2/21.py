
dic = {}

no_dic = int(input("\n How many you want dic to insert : "))

for i in range(0, no_dic):

    name = input("\n Enter a cricketer name : ")
    score = int(input("\n Enter a his score : "))

    dic[name] = score
    
choice = input("\n Enter cricketer name : ")
print("\n",dic[choice])
