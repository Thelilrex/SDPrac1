
days = 0
total = 2440
fee = 9972
print("INSTRUCTIONS")
print("Floats would be trucated to int")
print("Enter a negative number of days to exit")
while(True):
    infected = 7
    withdraw = int(infected)
    infected_Today = infected
    days = int(input("Enter the number of days: "))
    if(days < 0):
        print("See you later")
        break
    if(days == 0):
        print("Total number of infected are: ", withdraw)
        print("The percentage of people infected: ", (infected * 100/total))
        print("The number of students withdrawing are: ", withdraw)
        print("Loss for institution is: ", withdraw * fee)
        continue
    for i in range (0, days):
        infected +=  infected_Today * 1.2
        infected_Today *= 1.2
        if(i <= 14):
            withdraw = int(infected)
    loss = withdraw * fee
    if(infected >= 2440):
        print("Total loss is: ", loss)
        print("Students withdrawn: ", withdraw)
        print("The number of safe students is 0")
        print("Every one is infected")
        print("100 percent infected")
        continue
    infected_percent = infected * 100 / total
    safe = total - int(infected)
    loss += safe * 0.05 * fee
    print("The loss is: ", loss)
    print("The infected percentage is: ", infected_percent)
    print("Students withdrawn: ", withdraw)
    print("The number of students infected is: ", infected)
    print("Students who are safe: ", safe)
