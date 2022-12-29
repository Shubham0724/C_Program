// string example

/*
#include <stdio.h>
int main()
{
    // declare and initialise string
    char str[] = "CentralCee";
    printf("%s", str);
    return 0;
}


// followings are string functions

//1. strcat():

#include <stdio.h>
#include <string.h>
int main()
{
    char s[] = "Central";
    char t[] = "Cee";
    strcat(s, t);
    printf("String = %s", s);
}


//2. strlen():

#include <stdio.h>
#include <string.h>
int main()
{
    char s[] = "Central_Cee";
    int len = strlen(s);
    printf("Length = %d", len);
}


//3. strcpy():

#include <stdio.h>
#include <string.h>
int main()
{
    char s[] = "Central_Cee";
    char t[50];
    strcpy(t, s);
    printf("Source string = %s\n", s);
    printf("Target string = %s", t);
}


//4. strcmp():
#include <stdio.h>
#include <string.h>
int main()
{
    char s[] = "central";
    char t[] = "Cee";
    int cmp = strcmp(s, t);
    printf("Comparison result = %d", cmp);
}
*/

//5. strrev():

#include <stdio.h>
#include <string.h>
int main()
{
    char s[] = "eec_lartnec";
    printf("Reversed string = %s", strrev(s));
}