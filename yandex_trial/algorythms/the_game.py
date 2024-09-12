print('this is the game')
import random

petya = []
vasya = []
deck = []

for i in range(1, 100):
    deck.append(random.randint(0, 100))

while len(deck) > 0:
    x = deck.pop()
    print(f'Petya vitshil {x}')
    y = deck.pop()
    print(f'Vasya vitshil {y}')
    if x < y:
        petya.append(deck.pop())
    else:
        vasya.append(deck.pop())
else:
    i = sum(petya) 
    j = sum(vasya)
    print(i,j)
    if i > j:
        print('petya win')
    else:
        print('vasya win')