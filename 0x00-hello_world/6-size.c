#include <stdio.h>
/**
 * main - prints all data type
 *
 * Description: Prints all data types in c programming
 *
 * Return: 0
 *
 */
int main(void)
{
char a;
int b;
int long c;
int long long d;
float e;
printf("size of a char: %zu byte(S)\n", sizeof(a));
printf("Size of an int: %zu byte(s)\n", sizeof(b));
printf("Size of a long int: %zu byte(s)\n", sizeof(c));
printf("size of a long long int: %zu byte(s)\n", sizeof(d));
printf("size of a float: %zu byte(s)\n", sizeof(e));
return (0);
}
