# C - More functions, more nested loops  
  
#  What is the output of the following piece of code?
```sh
int i;

for (i = 48; i < 58; i++)
{
    printf("%c", i);
}

/*output: 0123456789*/
```   
# What is the output of the following piece of code?  
```sh
int i;

i = 0;
while (i < 10)
{
    printf("%d", i % 2);
    i++;
}

/*output: 0101010101*/
```
# What is the output of the following piece of code?
```sh
int i;

for (i = 0; i < 10; i++)
{
    printf("%d", i * 2);
}

/*output: 024681012141618*/
```
# What is the output of the following piece of code?
```sh
int i;

i = 0;
while (i < 10)
{
    i++;
    printf("%d", i / 2);
}

/*output: 0112233445*/
```
# What is the output of the following piece of code?
```sh
int i;

i = -9;
while (i < 0)
{
    printf("%d", -i);
    i++;
}

/*output: 987654321*/
```
# What is the output of the following piece of code?
```sh
int i;

i = 9;
while (i--)
{
    printf("%d", i);
}

/*output: 876543210*/
```
# What is the output of the following piece of code?
```sh
int i;

i = 9;
while (--i)
{
    printf("%d", i);
}

/*output: 87654321*/
```

# What is the return value of the following function?
```sh
int some_function(void)
{
    printf("%d", 12);
    return (98);
}

/*ouptut: 98*/

# What is the return value of the following function?
```sh
int some_function(void)
{
    int i;

    for (i = 0; i < 10; i++)
    {
        printf("%d", i);
    }
    return(i);
}

/*output: 10*/
```
```
