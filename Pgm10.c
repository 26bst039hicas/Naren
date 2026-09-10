#include <stdio.h>

/* No Argument, No Return */
void fun1()
{
    printf("No Argument, No Return\n");
}

/* Argument, No Return */
void fun2(int a)
{
    printf("Argument, No Return: %d\n", a);
}

/* No Argument, With Return */
int fun3()
{
    return 10;
}

/* Argument, With Return */
int fun4(int a, int b)
{
    return a + b;
}

int main()
{
    int result;

    fun1();

    fun2(20);

    result = fun3();
    printf("No Argument, With Return: %d\n", result);

    result = fun4(10, 20);
    printf("Argument, With Return: %d\n", result);

    return 0;
}
