# Bit manipulation

```
int i = 5;        00000101
int j = 17;       00010001
```

XOR
int h = i ^ j;    00010100  if they are different "1" (Difference)

OR
int a = i | j;    00010101  if there is at least one "1" place "1" (Union)

AND 
int b = i & j;    00000001  if there is at least one "0" place "0" (Intersection)

NOT
int c = ~i;       11111010  if the value is 5 then the result is -6 (Invert)


1 << n;           moves the 1 "n" positions to the left
		  n = 3;

                  00000001
                  00001000


1 >> n;           moves the 1 "n" positions to the right
		  n = 3;

                  00001000
                  00000001

