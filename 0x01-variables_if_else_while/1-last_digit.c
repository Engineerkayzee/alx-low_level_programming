#include <stdio.h>
#include <ctype.h>
/**
 * main - all codes
 *
 * Description: A program thatprints alphabets in lowercase follwed by a line
 *
 * Return: 0
 *
 */
int main()
{
	char alphabets;
	for (alphabets = 'A'; alphabets < 'z'; alphabet++)
	{
		putchar(tolower(alphabets));
	}
	putchar("\n");
	return (0);
}
