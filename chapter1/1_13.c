#include <stdio.h>

#define MAX_LENGTH	20

/* a small value of MAX_LENGTH will cause buffer overflow */

int max(int *);

int main()
{
	int wlength[MAX_LENGTH], i, j, c, nw = 0;

	for (i=0; i<MAX_LENGTH; ++i)
		wlength[i] = 0;

	while ((c = getchar()) != EOF)
	{
		++nw;
		if (c == ' ' || c == '\t' || c == '\n')
		{
			++wlength[nw-1];
			nw = 0;
		}
	}
	printf("lengths of words are:");
	for (i=0; i<MAX_LENGTH; ++i)
		printf(" %d", wlength[i]);
	printf("\n");
	printf("horizontal histogram: \n");
	for (i=0; i<MAX_LENGTH; ++i)
	{
		for (j=0; j<wlength[i]; ++j)
			printf("-");
		printf("\n");
	}
	int max_number = max(wlength);
	printf("vertical histogram: \n");
	for (j=max_number; j>0; --j)
	{
		for (i=0; i<MAX_LENGTH; ++i)
		{
			if (wlength[i] >= j)
				printf("|");
			else
				printf(" ");
		}
		printf("\n");
	}
	return 0;
}

int max (int *array)
{
	int max_value = array[0];
	for (int i=1; i<MAX_LENGTH; ++i)
	{
		if (max_value < array[i])
			max_value = array[i];
	}
	return max_value;
}

