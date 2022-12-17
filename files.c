/* syntax for declaring a pointer of file type is

    FILE *ptr;
*/ 

/* The following are the modes:

r: opens a file for reading.
w: opens a file for writing. It can also create a new file.
a: opens a file for appending.
r+: opens a file for both reading and writing but cannot create a new file.
w+: opens a file for both reading and writing.    
*/

/*

Closing a file
Syntax:
fclose(ptr);

*/



// Reading a file
#include <stdio.h>
 
int main()
{
    FILE *ptr;
    ptr = fopen("Example.txt", "r");
    char str[128];
    fscanf(ptr, "%s", str);
    printf("%s", str);
}



// Writing to a file

/*
#include <stdio.h>
 
int main()
{
    FILE *ptr;
    ptr = fopen("Example.txt", "w");
    char str[128] = "Hello World!";
    fprintf(ptr, "%s", str);
}
*/


// END OF C PROGGRAMMING
