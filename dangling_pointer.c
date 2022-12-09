//De-allocating or free variable memory

/*
#include <stdio.h>
int main()
{
    int a = 80;
    int *ptr = (int *)malloc(sizeof(int));
    ptr = &a;
    free(ptr);
    return 0;
}
*/

//Function Call

#include <stdio.h>
int *myvalue()
{
    int a = 10;
    return &a;
}

int main()
{
    int *ptr = myvalue();
    printf("%d", *ptr);
    return 0;
}
