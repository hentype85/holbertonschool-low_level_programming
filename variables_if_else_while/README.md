# C - Variables, if, else, while

# What is the size of the unsigned int data type?

4 bytes

# What is the size of the char data type?

1 byte

# What is the size of the float data type?

4 bytes

statements in ANSI C and Betty-compliant (Considering a and b two variables of type int):

if (a > b)
{
  return (a);
}

if (a > b)
  return (a);

# for statements in ANSI C and Betty-compliant? (Considering a and b two variables of type int):
```sh
for (a = 0; a < b; a++)
{
    printf("%d\n", a);
}
```
```sh

for (a = 0; a < b; a++)
    printf("%d\n", a);
```
```sh
a = 0;
for (; a < b;)
{
    printf("%d\n", a++);
}
```
# while or do/while statements in ANSI C and Betty-compliant? (Considering a and b two variables of type int):
```sh
a = 0;
while (a < b)
{
    printf("%d\n", a);
    a++;
}
```
```sh
a = 0;
do {
    printf("%d\n", a);
    a++;
} while (a < b);
```
```sh
a = 0;
while (a < b)
    printf("%d\n", a++);
```
