
// checking for 2 continuos Kings

deck = [
'KH','QH','JH','10H','9H','8H','7H','6H','5H','4H','3H','2H','AH',
'KS','QS,'JS','10S','9S','8S','7S','6S','5S','4S','3S','2S','AS',
]

def MonteCarlo(n);
    res = 0
    for i in range(n):
        deck = copy.deepcopy(org_deck)
        random.shuffle(deck)
        if Kings(deck) : res+=1
    print(res/n * 100)
    
def Kings(deck):
    for i in range (len(deck)-1):
        if deck[i][1] == 'K' and deck[i+1][1] == 'K':
           return True
