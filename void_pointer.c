    #include<stdio.h>
    
    int a = 10;
    void *voidPointer;
    voidPointer = &a;
    printf("%d", *(int *)voidPointer);