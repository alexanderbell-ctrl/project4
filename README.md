# project4

Algorithm
---
A horse race game, where each round every horse will "flip a coin" to move forward a space or not.

- main
```
inizialize horse positions array (0,0,0,0,0)

```

- advance (int horseNum, int* horse_positon)
```
generate random num 1-2
if 1:
  no change
if 2:
  horse_position @ position of *int horseNum* +1

```

- printLane (int horseNum, int* horse_position)
```
initizalize template lane array (*.*.*.*.*.*.*.*)
replace one character in array with *int horseNum* @ corresponding position value in *horse_position*
```

- isWinner (int horseNum, int* horse_position)
```

```
