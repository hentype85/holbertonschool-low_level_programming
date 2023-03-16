# C - Pointers, arrays and strings  

## What is the size of a pointer to a char (on a 64-bit architecture) ?
8 bytes  

## What is the size of a pointer to an int (on a 64-bit architecture) ?
8 bytes

## If we have a variable called var of type int, how can we get its address in memory?
&var

## What is the identifier to print an address with printf?
%p

## The process of getting the value that is stored in the memory location pointed to by a pointer is called:
Dereferencing

## Is it possible to declare a pointer to a pointer?
Yes

## What happens when one tries to access an illegal memory location?
Segmentation fault

## What is the value of n after the following code is executed?
```sh
int n = 98;
int *p = &n;
```
value: 98

## What is the value of n after the following code is executed?
```sh
int n = 98;
int *p = &n;

p = 402;
```
value: 98

## What is the value of n after the following code is executed?
```sh
int n = 98;
int *p = &n;

*p = 402;
```
value: 402

## What is the value of n after the following code is executed?
```sh
int n = 98;
int *p = &n;

*p++;
```
value: 98

## We declare the following variable
```sh
int arr[5];

What is the size in memory of the variable arr?
size: 20 bytes  
```
## We declare the following variable
```sh
int arr[5];

What is the equivalent of typing arr[2]?

*(arr + 2)
```
