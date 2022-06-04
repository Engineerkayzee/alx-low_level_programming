#include <stdio.h>
/**
 * main - print out thr result of the function
 *
 * Description: print out all the alphabets in reverse
 *
 * Return: return integer value o
 *
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'z'; alphabet >= 'a'; alphabet--)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}

