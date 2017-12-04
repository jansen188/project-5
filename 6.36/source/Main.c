#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, j;
	char str[100];
	printf("Enter String\n");

	fgets(str, sizeof str, stdin);
	printf("\nString in Reverse Order\n");

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\n')
		{
			for (j = i - 1; j >= 0 && str[j] != ' '; j--)
				printf("%c", str[j]);

			printf(" ");
		}
		i++;
	}
	printf("\n");
	system("pause");
	return 0;
}