
# Crossroad - One Way

The crossroad is an example of critical section.

```
              ^
              |
              |
<------------------------------ E
              |
              |
              | S
```

```
// I want to cross
north = waiting
// You go first if you are waiting first
turn = 'E'
// wait until no one is waiting on the other way or it's my turn.
While (east == waiting && turn == E);
do {} until(east != waiting || turn == 'S');
north = leave
```

```
              | N
              |
              |
W ----------------------------- E
              |
              |
              | S
```
