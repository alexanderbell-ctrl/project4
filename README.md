# project4

Algorithm
---
A horse race game, where each round every horse will "flip a coin" to move forward a space or not.

- main
```
inizialize horse positions array (0,0,0,0,0)

for i in arrary:
  printLane

keepGoing
while:
  for *int horseNum* 0-4:
    advance
  printLane
  if isWinner:
    keepGoing is False
    print: Winner is Horse___!
  else:
    nada
  print: "Press enter to proceed to next round..."
  wait for user input
```

- advance (int horseNum, int* horse_positon)
```
generate random num 1-2
if 1:
  nada
if 2:
  value of horse_position @ *int horseNum* = +1

```

- printLane (int horseNum, int* horse_position)
```
for numbers 0->*horse_position*:
    print "*"
print *horseNum*
for numbers *horse_position* < 14:
    print "*"
```

- isWinner (int horseNum, int* horse_position)
```
if (value of *horse_position* @ *horseNum* == 14):
  return True
else:
  return False
```
