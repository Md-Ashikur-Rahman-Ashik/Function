#include <stdio.h>

int sum(int num1, int num2)
{
    int add = num1 + num2;
    return add;
}

int main()
{
    int add = sum(10, 5);

    printf("%d", add);

    return 0;
}