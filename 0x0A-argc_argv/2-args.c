#include <stdio.h>
/**
 * main - prints all arguments it receives.
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: 0 - success.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0 ; i < argc ; i++)
	{
		printf("%s", argv[i]);
		if (i < argc)
		{
			printf("\n");
		}
	}
	return (0);
}
