#include <stdio.h>

void swap(int *a, int *b)
{
    int tg ;
    tg = *a;
    *a = *b;
    *b = tg;
}

int main()
{
    int num1 = 10;
    int num2 = 20;
    void swap(int *, int *);
    printf("\nBefore swap: num1 = %d, num2 = %d", num1, num2);
    swap(&num1, &num2);
    printf("\nAfter swap: num1 = %d, num2 = %d", num1, num2);
    return 0; 
}