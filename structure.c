//Basic syntax for declaring a struct is,
/*
struct structure_name
{
    //structure_elements
} structure_variable;

*/

#include <stdio.h>
 
struct Books
{
    char title[20];
    char author[100];
    float price;
    int pages;
};
 
int main()
{
    struct Books book1 = {"C Programming", "Central_Cee", 123.99, 300};
    printf("%s\n", book1.title);
    printf("%s\n", book1.author);
    printf("%f\n", book1.price);
    printf("%d\n", book1.pages);
    return 0;
}
