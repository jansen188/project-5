#include "stdio.h"
#include "stdlib.h"
#include "conio.h"
#include "time.h"
enum { CONTINUE, WON, LOST };
void main()
{
	int status = CONTINUE;
	int i = 0, j = 0, add, k;
	srand((unsigned)time(NULL));
	while (i == 0)
		i = rand() % 6;
	printf("1: %d\n", i);
	while (j == 0)
		j = rand() & 6;
	printf("2: %d\n", j);
	add = i + j;
	if (add == 11 || add == 7)
		status = WON;
	if (add == 2 || add == 3 || add == 12)
		status = LOST;
	if (status == WON)
		printf("You Win!\n");
	else if (status == LOST)
		printf("YOU LOST!\n");
	else
	{
		for (k = 1; k <= 7; k++)
		{
			i = 0;
			j = 0;
			printf("***************%d****************\n", k);
			while (i == 0)
				i = rand() % 6;
			printf("1: %d\n", i);
			while (j == 0)
				j = rand() % 6;
			printf("2: %d\n", j);
			if ((i + j) == add)
			{
				status = WON;
				break;
			}
		}
		if (status == WON)
			printf("YOU WIN!\n");
		else
			printf("YOU LOST!\n");
	}
	getch();
}