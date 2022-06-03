#include <stdio.h>
#include <stdio.h>
/**
 * main - all codes
 * Description: A program that prints alphabets in lowercase follwed by a line
 *
 * Return: 0
 *
 */
int main(void)
{
char alphabet;
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
putchar(alphabet);
}
putchar('\n');
return (0);
}
