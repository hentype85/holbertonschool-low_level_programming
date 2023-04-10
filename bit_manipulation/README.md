# Bit manipulation

``sh
int i = 5;        00000101
int j = 17;       00010001
``
``sh
XOR
int h = i ^ j;    00010100  if they are different "1" (Difference)
``
``sh
OR
int a = i | j;    00010101  if there is at least one "1" place "1" (Union)
``
``sh
AND 
int b = i & j;    00000001  if there is at least one "0" place "0" (Intersection)
``
``sh
NOT
int c = ~i;       11111010  if the value is 5 then the result is -6 (Invert)
``

``sh
1 << n;           moves the 1 "n" positions to the left
		  n = 3;

                  00000001
                  00001000
``
``sh
1 >> n;           moves the 1 "n" positions to the right
		  n = 3;

                  00001000
                  00000001
``
