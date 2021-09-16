//64010846
#include <stdio.h>
#include <math.h>

int main()
{
	int a;
	scanf_s("%d", &a);

	int w;
	if (a % 2 == 1)
		w = a;
	else
		w = a - 1;

	int c = (w / 2);

	char table[100][100];
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < w; j++)
		{
			table[i][j] = '_';
		}
	}
	int n = 0;
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < w; j++)
		{
			if (j == c || j == c + n || j == c - n)
				table[i][j] = '*';

			if (j == c)
			{
				table[i][j] = '_';

				if (i == 0 || i == a - 1)
					table[i][j] = '*';
			}
		}

		if (i < c)
			n++;
		else
		{
			if (a % 2 == 0 && i <= c )
				n=n;
			else
				n--;
		}
	}


	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < w; j++)
			printf("%c", table[i][j]);
		printf("\n");
	}

	return 0;

}