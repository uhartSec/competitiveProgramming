

def simpleArraySum(ar):
    total = 0 
    for x in ar: 
        total += x
    return total


def compareTriplets(a, b): 
    alice_score = 0 
    bob_score = 0 
    for x in range(len(a)):
        if a[x] > b[x]:
            alice_score+=1
        elif a[x] < b[x]:
            bob_score+=1
    total_scores=[]
    total_scores.append(alice_score)
    total_scores.append(bob_score)
    return total_scores

def getMoneySpent(keyboards, drives, b): 
    prices = []

    for x in range(len(keyboards)):
        for y in range(len(drives)):
            current_total = keyboards[x] + drives[y]
            if current_total <= b:
                prices.append(current_total)

    if len(prices) == 0:
        return -1; 
    return max(prices);


def getMoneySpent(keyboards, drives, b): 
    prices = []
    for x in range(len(keyboards)):
        for y in range(len(drives)):
            current_total = keyboards[x] + drives[y]
            if current_total <= b:
                prices.append(current_total)

    if len(prices) == 0:
        return -1; 
    return max(prices);
