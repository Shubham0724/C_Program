#include <stdio.h>
 
int factorial(int num)
{
    if (num > 0)
    {
        return num * factorial(num - 1);
    }
    else
    {
        return 0;
    }
}
 
int main()
{
    int ans = factorial(10);
    printf("%d", ans);
    return 0;
}
