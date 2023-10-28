#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change
 *
 * @argc: var1
 * @argv: var2
 *
 * Return: Always 0
*/

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
	int yen, mincoin = 0, dinero = atoi(argv[1]);
	int dec[] = {25, 10, 5, 2, 1};

	for (yen = 0; yen < 5; yen++)
	{
		if (dinero >= dec[yen])
		{
			mincoin += dinero / dec[yen];
			dinero = dinero % dec[yen];
			if (dinero % dec[yen] == 0)
			{
				break;
			}
		}
	}
	printf("%d\n", mincoin);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
