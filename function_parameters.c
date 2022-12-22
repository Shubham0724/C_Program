//function_syntax

/*
return_type functionName(parameter1, parameter2) {
  // body of the function
}
*/

//Different ways to define a function

/*
// 1)Without arguments and without return value
#include <stdio.h>
 
void func()
{
    printf("This function doesn't return anything.");
}
 
int main()
{
    func();
}



// 2)Without arguments and with the return value.

#include <stdio.h>
 
int func()
{
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    return a + b;
}
 
int main()
{
    int ans = func();
    printf("%d", ans);
}


// 3)With arguments and without a return value.
#include <stdio.h>
 
void func(int a, int b)
{
    printf("%d", a * b);
}
 
int main()
{
    func(2, 3);
}
*/

// 4) With arguments and with the return value.
#include <stdio.h>
 
int func(int a, int b)
{
    return a + b;
}
 
int main()
{
    int ans = func(2, 3);
    printf("%d", ans);
}



