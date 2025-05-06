#include <stdio.h>

void sum()
{
    int num1, num2;
    scanf("%d %d", &num1, &num2);

    int add = num1 + num2;
    printf("%d", add);
}

int main()
{
    sum();

    return 0;
}