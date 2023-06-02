#include <stdio.h>
/**
 * main - main block
 * Description: Use `putchar` function to print the alphabet in lowercase.
 * Return: 0
 */
int main(void) 
{
    char c = 'a';
    
    while (c <= 'z')
    {
        putchar(c);
        c ++;
    }
    putchar('\n');
    c = 'A';
    while (c <= 'Z')
    {
        putchar(c);
        c ++;
    }
    
    return 0;
}
