#include <stdio.h>
#include <stdbool.h>
int main(void)
{
    unsigned long num;
    unsigned long i;
    printf("输入q停止!\n请输入一个整数:");
    while (scanf("%lu", &num)==1)
    {
    bool isPrime;
    for ( i = 2,isPrime=true; (i*i) <= num; i++)
    {
        if (num % i == 0)
        {
            isPrime = false;
            if ((i*i)==num)
            {
                printf("%lu ", i);
            }else
            printf("%lu %lu ", i,num/i);
        }
    }
    if (isPrime)
    {
        printf("这个数是个素数\n");
    }else
        printf("是%lu的约数\n", num);
    printf("输入q停止!\n请输入一个整数:");
    }
    return 0;
}