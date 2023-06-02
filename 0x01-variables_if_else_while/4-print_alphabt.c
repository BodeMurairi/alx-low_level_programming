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
        if (c != 'q' && c !='e')
            putchar(c);
        c ++;
    }
    putchar('\n');
    
    return 0;
}
